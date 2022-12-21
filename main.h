#ifndef __MAIN_H__
#define __MAIN_H__

#define IN 1
#define OUT 0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

extern char **environ;

typedef struct control
{
	char *saisi;
	int (*f)(char *cmd, char **args, char **env);
} control_t;


void print_pr(void);
int start(char *buff, char **env, int line);
int (*control_saisii(char *saisi))(char *cmd, char **args, char **env);
void free_tab(char **tabtok);
int exec_path(char **args, char **env, int line);
char *path_func(char *cmd, char *PATH);
int func_exit(char *cmd, char **args, char **env);
char **func_tok(char *buf);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);

#endif
