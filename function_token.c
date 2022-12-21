#include "main.h"
#define BUFSIZE 64
#define DELIM " \t\r\n\a"
/**
 * func_tok - a funvtion that creates token.
 * @buf: The buffer receives
 * Return: (args)
 */
char **func_tok(char *buf)
{
	int size = BUFSIZE;
	int i = 0;
	char **tokens;
	char *token;


	tokens = malloc(size * sizeof(char *));
	if (!tokens)
	{
		write(2, "Allocation error\n", 17);
		exit(EXIT_FAILURE);
	}

	token = strtok(buf, DELIM);

	while (token != NULL)
	{
		tokens[i] = _strdup(token);
		token = strtok(NULL, DELIM);
		i++;
	}

	tokens[i] = NULL;
	return (tokens);
}
