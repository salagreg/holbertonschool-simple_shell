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

	printf("$ ");
	nread = getline(&lineptr, &len, stdin);

	if (nread == -1)
	{
		printf("Erreur");
		exit(0);
	}
	else if (nread == 0)
	{
		printf("Fin de fichier\n");
		return (0);
	}

	printf("%s\n", lineptr);

	free(lineptr);

	return (0);
}
