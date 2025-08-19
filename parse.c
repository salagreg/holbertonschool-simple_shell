#include "main.h"

/**
 * parse_command - Découpe la ligne en arguments
 * @line: ligne lue au clavier
 * @argv: tableau qui recevra les arguments
 *
 * Retour: nombre d'arguments
 */
int parse_command(char *line, char **argv)
{
    int i = 0;
    char *token;

    token = strtok(line, " ");
    while (token != NULL && i < 63)
    {
        argv[i++] = token;
        token = strtok(NULL, " ");
    }
    argv[i] = NULL;
    return i;
}
