# Projet Simple Shell

---

### Description du projet :

Le _projet Simple Shell_ consiste à développer un interpréteur de commandes minimaliste fonctionnant sous Linux/Unix.
Ce programme permet à l’utilisateur d’exécuter des commandes systèmes en tapant des instructions, avec un ensemble limité de fonctionnalités.

Le but principal est de comprendre le fonctionnement basique d’un shell :

- Lecture de la ligne de commande via l'entrée standard.
- Analyse des commandes et arguments.
- Recherche des commandes dans le PATH.
- Gestion des processus avec fork(), execve(), et wait().
- Gestion des erreurs.
- Interaction utilisateur avec un prompt simple.

---

### Commande de compilation :

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \*.c -o hsh

---

### Exigences :

**Fonctions et macros autorisés :**

- all functions from _string.h_
- access _(man 2 access)_
- chdir _(man 2 chdir)_
- close _(man 2 close)_
- closedir _(man 3 closedir)_
- execve _(man 2 execve)_
- exit _(man 3 exit)_
- \_exit _(man 2 \_exit)_
- fflush _(man 3 fflush)_
- fork _(man 2 fork)_
- free _(man 3 free)_
- getcwd _(man 3 getcwd)_
- getline _(man 3 getline)_
- getpid _(man 2 getpid)_
- isatty _(man 3 isatty)_
- kill _(man 2 kill)_
- malloc _(man 3 malloc)_
- open _(man 2 open)_
- opendir _(man 3 opendir)_
- perror _(man 3 perror)_
- printf _(man 3 printf)_
- fprintf _(man 3 fprintf)_
- vfprintf _(man 3 vfprintf)_
- sprintf _(man 3 sprintf)_
- putchar _(man 3 putchar)_
- read _(man 2 read)_
- readdir _(man 3 readdir)_
- signal _(man 2 signal)_
- stat _(\_\_xstat) (man 2 stat)_
- lstat _(\_\_lxstat) (man 2 lstat)_
- fstat _(\_\_fxstat) (man 2 fstat)_
- strtok _(man 3 strtok)_
- wait _(man 2 wait)_
- waitpid _(man 2 waitpid)_
- wait3 _(man 2 wait3)_
- wait4 _(man 2 wait4)_
- write _(man 2 write)_

* Tous les fichiers seront compiles sur **Ubuntu 20.04 LTS** a l'aide de **gcc**, avec les options : _-Wall -Werror -Wextra -pedantic -std=gnu89_
* Tous les fichiers doivent se terminer par une nouvelle ligne.
* Fichier **README.md** a la racine du projet.
* Le code doit respecter le style **Betty**.
* Le shell ne doit pas avoir de fuites de memoire.
* Limite a **5 fonctions** par fichier.
* Tout les fichiers d'en-tete doivent etre inclus et gardes.

---

### Commande d'execution man page :

- man ./hsh.1

---

### Organigramme :

<img width="867" height="711" alt="flowchart_simple_shell jpg" src="https://github.com/user-attachments/assets/1cf2ee02-f558-438d-aa8f-67900f06177f" />

---

### Exemples d'utilisation ./hsh :

---

### Utilisation de valgrind :
