#include "main.h"

/**
 * handle_builtin - Vérifie et exécute une commande builtin
 * @argv: tableau d’arguments
 * @lineptr: ligne allouée (à libérer si besoin)
 *
 * Return: 1 si une builtin a été exécutée, 0 sinon
 */

int handle_builtin(char **argv, char *lineptr)
int index;
{
    if (strcmp(argv[0], "exit") == 0)
    {
        free(lineptr);
        exit(0);
    }
    if (strcmp(argv[0],"env") == 0)
    {
	    for (i = 0; environ[i] !=NULL; index++)
	    {
		    printf("%s_n", environ[index]);
	    }
	    return(1);
    }

    return (0);
}
