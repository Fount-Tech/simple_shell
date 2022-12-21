#include "main.h"
/**
 * path_func - Follow the path to see if the command is present
 * @cmd: User input
 * @PATH: The path to follow
 * Return: (cmd)
 */
char *path_func(char *cmd, char *PATH)
{
	char *p_item = NULL;
	char *path = NULL;
	int lencmd = 0, lenitem = 0;

	p_item = strtok(PATH, ":");

	while (cmd[lencmd] != '\0')
		lencmd++;

	while (p_item[lenitem] != '\0')
		lenitem++;

	while (p_item)
	{
		path = malloc(sizeof(char) * (lencmd + lenitem) + 2);
		path = _strcpy(path, p_item);
		path = _strcat(path, "/");
		path = _strcat(path, cmd);
		if (access(path, X_OK) == 0)
			return (path);
		free(path);
		path = NULL;
		p_item = strtok(NULL, ":");
	}
	return (_strdup(cmd));
}
