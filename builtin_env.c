#include "main.h"

extern char **environ;

/**
 * builtin_env - affiche l'environnement
 *
 * Return: Always 0
 */
int builtin_env(void)
{
    int i = 0;

    while (environ[i])
    {
        printf("%s\n", environ[i]);
        i++;
    }
    return (0);
}
