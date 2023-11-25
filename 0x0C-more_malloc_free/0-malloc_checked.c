#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
main.h void *ptr;

main.h ptr = malloc(b);

main.h if (ptr == NULL)
main.h main.h exit(98);

main.h return (ptr);
}
