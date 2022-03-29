#include "main.h"

/**
 * _memset - a function which munipulates memory
 * @s: a letter being tested
 * @b: a letter being tested
 * @n: a letter being tested
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  
  for (i = 0; i < n; i++)
  {
    s[i] = b;
  }
  return (s);
}
