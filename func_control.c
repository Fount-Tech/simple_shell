#include "main.h"
/**
 * control_saisii - checks if saisi exists.
 * @saisi: user command
 * Return: (NULL)
 */
int (*control_saisii(char *saisi))(char *cmd, char **args, char **env)
{
	int i;
	control_t tbs[] = {
		{"exit", func_exit},
		{NULL, NULL},
	};

	for (i = 0; tbs[i].saisi != NULL; i++)
	{
		if (_strcmp(saisi, tbs[i].saisi) == 0)
			return (tbs[i].f);
	}
	return (NULL);
}
