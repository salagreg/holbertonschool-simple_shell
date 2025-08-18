#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <libc.h>
#include <errno.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);


#endif
