#include "main.h"
/**
 * exec_path - Searches for a commandin path
 * @args: array of arguments passed to stdin
 * @env: array of strings of env
 * @line: non utiliser
 * Return: (0) or (134)exit
 */
int exec_path(char **args, char **env, __attribute__((unused))int line)
{
	pid_t pidchild;
	char *path = NULL;
	char *PATH;

	PATH = getenv("PATH");/* recover system environment variables */

	if (!PATH && execve(args[0], args, env) == -1)
	{
		free(path);
		return (2);
	}
	else
	{
		PATH = strdup(PATH);
		path = path_func(args[0], PATH);
		free(PATH);

		pidchild = fork();

		if (pidchild == 0)
		{
			if ((execve(path, args, env)) == -1)
			{
				free(path);
				return (2);
			}
		}

		else if (pidchild > 0)
			wait(NULL);
		else
		{
			free(path);
		}
	}
	if (path)
		free(path);
	return (0);
}
