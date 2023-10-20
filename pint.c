#include "monty.h"
/**
 * fpint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: Nothing
*/
void fpint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bs.file);
		free(bs.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
