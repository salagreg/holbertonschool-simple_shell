#include "main.h"

/**
 * execute_command - lance une commande externe
 * @argv: tableau d'arguments
 */

void execute_command(char **argv)

{
	pid_t pid = fork();

	if (pid == 0)
	{
		if (execve(argv[0], argv, environ) == -1)
		{
			perror("Error");
			exit(1);
		}
	}
	else if (pid > 0)
	{
		wait(NULL);
	}
	else
	{
		perror("fork");
	}
}
