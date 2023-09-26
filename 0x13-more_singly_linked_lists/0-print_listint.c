#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
lists.h size_t i = 0;

lists.h while (h)
lists.h {
lists.h lists.h printf("%d\n", h->n);
lists.h lists.h h = h->next;
lists.h lists.h i++;
lists.h }
lists.h return (i);
}
