#include "main.h"

/**
 * handle_builtin - Vérifie et exécute une commande builtin
 * @argv: tableau d’arguments
 * @lineptr: ligne allouée (à libérer si besoin)
 *
 * Return: 1 si une builtin a été exécutée, 0 sinon
 */

int handle_builtin(char **argv, char *lineptr)
{
    if (argv[0] == NULL)
        return (0);
    
    if (strcmp(argv[0], "exit") == 0)
	{
        if (argv[1] == NULL)
        {
            free(lineptr);
            exit(0);
        }
        else {
            return (1);
        }
	}
    
    else if (strcmp(argv[0], "env") == 0)
    {
        builtin_env();
        return (1);
    }

    return (0);
}
