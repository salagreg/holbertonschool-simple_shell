#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

extern char **environ;

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
int parse_command(char *line, char **argv);

#endif
