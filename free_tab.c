#include "main.h"
/**
 * free_tab - free table of tokens
 * @tabtok: table of token.
 */
void free_tab(char **tabtok)
{
	int i = 0;

	if (tabtok != NULL)
	{
		while (tabtok[i])
		{
			free(tabtok[i]);
			i++;
		}
		free(tabtok);
	}

}
