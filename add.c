#include "monty.h"
/**
 * f_add - adds the top two elements in the stack
 * @head: head of the stack
 * @counter: line_number
 * Return: zero
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = o, aux;
	h = *head;
	while(h)
{
	h = h->next;
	len++;
}
if (len < 2)
{
	fprint(stderr, "L%d: can't add, stack too short\n",counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
	h = *head;
	aux = h-> + h->next->;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

