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

	if (handle_builtin(argv))
		continue;

        pid = fork();
        if (pid == 0)
        {
            if (execve(argv[0], argv, environ) == -1)
            {
                perror("Error");
                exit(1);
            }
        }
            else if (pid > 0)
            
            wait(NULL);
            
            else
                perror("fork");
            }
        
        free(lineptr);
        return (0);
}
