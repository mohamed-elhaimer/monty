#include "monty.h"
/**
 * getline - read input from
 * Return: the input on a bff
 */
char *_getline()
{
	int i, rd, bfs = BUFSIZE;
	char c = 0, *bf, *buf;

	bf = malloc(bfs);
	if (bf == NULL)
	{
		free(bf);
		return (NULL);
	}
	for (i = 0; c != EOF && c != '\n'; i++)
	{
		fflush(stdin);
		rd = read(STDIN_FILENO, &c, 1);
		if (rd == 0)
		{
			free(bf);
			exit(EXIT_SUCCESS);
		}
		bf[i] = c;
		if (bf[0] == '\n')
			return (enter(bf));
		if (i >= bfs)
		{
			bf = realloc(bf, (bfs + 2));
			if (bf == NULL)
			{
				free(bf);
				return (NULL);
			}
		}
	}
	bf[i] = '\0';
	buf = space(bf);
	free(bf);
	hashtag_handler(buf);
	return (buf);
}