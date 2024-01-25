#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
List.h int count;

List.h count = 0;

List.h if (h == NULL)
List.h List.h return (count);

List.h while (h->prev != NULL)
List.h List.h h = h->prev;

List.h while (h != NULL)
List.h {
List.h List.h printf("%d\n", h->n);
List.h List.h count++;
List.h List.h h = h->next;
List.h }

List.h return (count);
}
