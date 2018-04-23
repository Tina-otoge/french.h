/*
** EPITECH PROJECT, 2018
** french.c
** File description:
** french.c
*/

#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "french.h"

néant *allocmem(taille_t taille)
{
	renvoie malloc(taille);
}

néant libérer(néant *pointeur)
{
	free(pointeur);
}

entier ouvrir(const néant *chemin, entier infos)
{
	renvoie open(chemin, infos);
}

entier créer(const néant *chemin, mode_t mode)
{
	renvoie creat(chemin, mode);
}

entier fermer(entier df)
{
	renvoie close(df);
}