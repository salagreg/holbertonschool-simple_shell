#include "main.h"
/**
 * main - Point d'entree du programme
 * @void: Aucun parametre
 * Return: Toujours 0 (Succes), ou 1 si une erreur se produit
 */
extern char **environ;

int main(void)
{
	char *lineptr = NULL;
	size_t len = 0;
	ssize_t nread;
	pid_t pid;

	while (1)
	{
		printf("$ ");
		nread = getline(&lineptr, &len, stdin);

		if (nread == -1)
		{
			free(lineptr);
			exit(0);
		}
		if (lineptr[nread - 1] == '\n') {
			lineptr[nread - 1] = '\0';
		}
		pid = fork();
		if (pid == 0)
		{
			char *argv[2];
			argv[0] = lineptr;
			argv[1] = NULL;
			execve(argv[0], argv, environ);
			perror(lineptr);
			exit(1);
		}
		else if (pid > 0)
			wait(NULL);
	
	}
	free(lineptr);
	return (0);
}
