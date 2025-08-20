#include "main.h"
/**
 * main - Point d'entree du programme
 * @void: Aucun parametre
 * Return: Toujours 0 (Succes), ou 1 si une erreur se produit
 */

int main(void)
{
	char *lineptr = NULL;
	size_t len = 0;
	ssize_t nread;

	while (1)
	{
		char *argv[64];

		if (isatty(STDIN_FILENO))
			printf("$ ");
		nread = getline(&lineptr, &len, stdin);
		if (nread == -1)
		{
			free(lineptr);
			exit(0);
		}
		if (lineptr[nread - 1] == '\n')
			lineptr[nread - 1] = '\0';
		if (lineptr[0] == '\0')
			continue;

		parse_command(lineptr, argv);

		if (handle_builtin(argv, lineptr))
		continue;
	}
	free(lineptr);
	return (0);
}
