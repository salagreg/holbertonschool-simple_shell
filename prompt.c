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
	pid_t pid;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		printf("#cisfun$ ");
		fflush(stdout);

		nread = getline(&lineptr, &len, stdin);
		
		if (nread == -1)
		{
			free(lineptr);
			break;
		}
		
		if (lineptr[nread - 1] == '\n')
			lineptr[nread - 1] = '\0';
		
		if (lineptr[0] == '\0')
			continue;
		
		pid = fork();
		
		if (pid == -1)
			continue;
		
		else if (pid == 0)
		{
			char *argv_exec[2];
			argv_exec[0] = lineptr;
			argv_exec[1] = NULL;
			execve(lineptr, argv_exec, environ);
			perror(lineptr);
			exit(1);
		}
		
		else
			wait(NULL);
	}
	free(lineptr);
	return (0);
}
