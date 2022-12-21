#include "main.h"
/**
 * start - start programme
 * @buff: command entered to be executed
 * @env: the env in which commands are executed.
 * @line: The lines inputed
 * Return: (0)
 */
int start(char *buff, char **env, int line)
{
	int start = 0;
	char **tabtok = NULL;
	int (*f)(char *cmd, char **args, char **env);

	tabtok = func_tok(buff);
	if (tabtok[0])
	{
		f = control_saisii(tabtok[0]);

		if (f != NULL)
		{
			if (f(tabtok[0], tabtok, env) == 1)
			{
				free_tab(tabtok);
				return (1);
			}
		}
		else
		{
			start = exec_path(tabtok, env, line);
			free_tab(tabtok);
			return (start);
		}
	}
	free_tab(tabtok);
	return (0);
}
