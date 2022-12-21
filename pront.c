#include "main.h"
/**
 * print_pr - prins the $ sign.
 *
 */
void print_pr(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
}
