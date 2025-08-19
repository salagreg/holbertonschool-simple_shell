#include "main.h"

/**
 * find_path - Cherche la commande dans les dossiers du PATH
 * @cmd: la commande (ex: "ls")
 *
 * Return: chemin complet (malloc) si trouvé, NULL sinon
 */
char *find_path(char *cmd)
{
    char *path = getenv("PATH");
    char *dir, *full_path;
    struct stat st;

    if (!path)
        return (NULL);

    dir = strtok(strdup(path), ":");
    while (dir)
    {
        full_path = malloc(strlen(dir) + strlen(cmd) + 2);
        sprintf(full_path, "%s/%s", dir, cmd);

        if (stat(full_path, &st) == 0)
            return (full_path);

        free(full_path);
        dir = strtok(NULL, ":");
    }
    return (NULL);
}
