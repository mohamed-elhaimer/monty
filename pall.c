#include "monty.h"
/**
 * fpall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: Nothing
*/
void fpall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
