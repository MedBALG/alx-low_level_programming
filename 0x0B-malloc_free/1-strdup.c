#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: null
 */
char *_strdup(char *str)
{
	char *aze;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aze = malloc(sizeof(char) * (i + 1));

	if (azez == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aze[r] = str[r];

	return (aze);
}
