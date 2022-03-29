#include "main.h"
/**
*_memset - a function
*@s: a letter
*@b: a letter
*@n: a letter
*Return: Always 0
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