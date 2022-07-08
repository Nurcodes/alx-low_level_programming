#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 2

typedef struct entry_t
{
	char *key;
	char *value;
	struct entry_t *next;
} entry_t;



typedef struct
{
	entry_t **entries;
} ht_t;


/**--------------------------HASH TABLE-------------------------------------------*/
ht_t *ht_create(void)
{
	//allocate the table
	ht_t *hashtable = malloc(sizeof(ht_t) * 1);

	//allocate table entries
	hashtable->entries = malloc(sizeof(entry_t*) * TABLE_SIZE);

	//set each entrie to null
	int i = 0;
	for (; i < TABLE_SIZE; ++i)
		hashtable->entries[i] = NULL;

	return hashtable;
}



/**--------------------------HASH FUNCTION-----------------------------------------*/
unsigned int hash(const char *str)
{
	unsigned long int value;
	int c;

	// do several rounds of multiplication to the value
	while ((c = *str++))
	{
		value = ((value << 5) + value) + c;
	}

	// make sure value is 0 <= value < TABLE_SIZE
	value = value % TABLE_SIZE;

	return value;
}


/**-----------------------CREATE A NEW LIST THROUGH THE KEY AND VALUE--------------*/
entry_t *ht_pair(const char *key, const char *value)
{
	//allocate the entry
	entry_t *entry = malloc(sizeof(entry) * 1);
	entry->key = malloc(strlen(key) * 1);
	entry->value = malloc(strlen(value) * 1);

	// copy the key and value in place
	strcpy(entry->key, key);
	strcpy(entry->value, value);

	// next starts out at nul but may be set later on
	entry->next = NULL;

	return entry;
}


/**------------------------ADD A LIST TO THE HASH TABLE-----------------------------*/
void ht_set(ht_t *hashtable, const char *key, const char *value)
{
	unsigned int slot = hash(key);

	// try to look up an entry slot
	entry_t *entry = hashtable->entries[slot];

	// no entry means slot empty, insert asap
	if (entry == NULL)
	{
		hashtable->entries[slot] = ht_pair(key, value);
		return;
	}

	// if entry is not null either of two things has happend
	// We have hashed into a slot where the key already exits and it
	// needs to be update ---->
	// or We have a collision in which two different keys hash to the
	// same slot

	entry_t *prev;

	// walk through each entry until either the end is
	// reached or a matching key is found
	
	while (entry != NULL)
	{
		// check the key
		if (strcmp(entry->key, key) == 0)
		{
			// match found, replace the value
			free(entry->value);
			entry->value = malloc(strlen(value) * 1);
			strcpy(entry->value, value);
			return;
		}

		// walk to next
		prev = entry;
		entry = prev->next;
	}

	// adds a new node to the list at the current slot
	entry_t *tmp;


	tmp = ht_pair(key, value);
	prev->next = tmp;

}


/**----------------------Retrieves list in the hash table--------------------------*/
char *ht_get(ht_t *hashtable, const char *key)
{
	unsigned int slot = hash(key);

	// try to find a valid slot
	entry_t *entry = hashtable->entries[slot];

	//no slot means no entry
	if (entry == NULL)
	{
		printf("slot[%d] does not contain: %s\n", slot, key);
		return (NULL);
	}

	while (entry != NULL)
	{
		// means we have found the key some where in the slots list
		if (strcmp(entry->key, key) == 0)
		{
			printf("%s\n", entry->value);
			return entry->value;
		}

		// proceed to next key if available
		entry = entry->next;
	}
	// reaching here means we were >= 1 entries but no key match
	return (NULL);
}


/**--------------------------PRINTS THE WHOLE HASH TABLE---------------------------*/
void ht_dump(ht_t *hashtable)
{
	int i = 0;
	int j = 0;
	
	for (; i < TABLE_SIZE; ++i)
	{
		// assign a list pointer to each slot every iteration
		entry_t *entry = hashtable->entries[i];

		// if nothing there continue the loop
		if (entry == NULL)
			continue;

		// print each slot number
		printf("slot[%4d]== ", i);

		// go inside the slot and now in the list
		// prints each key and value
		for (j;;j++)
		{
			printf("index-[%d]: %s:%s ", j, entry->key, entry->value);

			if (entry->next == NULL)
				break;

			entry = entry->next;
		}

		printf("\n");
	}
}


int main(int argc, char **argv)
{
	ht_t *ht = ht_create();

	ht_set(ht, "hetairas", "tessst");
	ht_set(ht, "mentioner", "test");
	ht_set(ht, "stylist", "tes5");
	ht_set(ht, "subgenera", "worker");

	ht_dump(ht);
	return (0);
}
