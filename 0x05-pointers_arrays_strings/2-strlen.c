#include "main.h"

/**
 * _Strlen - returns the length of string
 *
 * @s: string parameter input
 *
 * Return: lenght of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
