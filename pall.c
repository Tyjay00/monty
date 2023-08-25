#include "monty.h"
/**
 * f_pall - function prints the stack
 * @head: stack head
 * @counter: no used
 * this function effectively prints the contents of the stack,
 * in the order they were pushed.
 *
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
	return;
	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	}
}
