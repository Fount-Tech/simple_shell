#include "main.h"
/**
 * main - The main a needs an (int) first argument.
 * @i: The main a needs an (int) first argument.
 * @argc: number argument obligatore**.
 * @argv: tab
 * Return: 0 success
 */
int main(__attribute__((unused))int i, char **argc, char **argv)
{
	int line = 1;
	char *buf = NULL;
	ssize_t read = 0;
	size_t bufsize = 0;
	int bon = 0;/*retour de function*/

	(void)argc;

	while (1)
	{
		print_pr();
		buf = NULL;

		read = getline(&buf, &bufsize, stdin);
		if (read == -1)
		{
			if (buf)
				free(buf);
			if (feof(stdin))
				exit(EXIT_SUCCESS);
			exit(EXIT_FAILURE);
		}
		else
		{
			bon = start(buf, argv, line);
			free(buf);
			if (bon == 1)
				exit(EXIT_SUCCESS);
		}
	}
	return (0);
}
