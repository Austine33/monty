#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: head of stack
 * @counter: not used
 * Return: zero
 */
void f_pall(stack_t **head, unsigned in counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n",h->n);
		h = h->next;
	}
}
