#include "monty.h"
/**
 * fswap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: Nothing
*/
void fswap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bs.file);
		free(bs.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}
