#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: Nothing
*/
void fpush(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bs.arg)
	{
		if (bs.arg[0] == '-')
			j++;
		for (; bs.arg[j] != '\0'; j++)
		{
			if (bs.arg[j] > 57 || bs.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bs.file);
			free(bs.content);
			freestack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bs.file);
		free(bs.content);
		freestack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bs.arg);
	if (bs.flag == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
