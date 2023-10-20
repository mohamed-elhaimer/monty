#include "monty.h"
/**
 * fpop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: Nothing
*/
void fpop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bs.file);
		free(bs.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
