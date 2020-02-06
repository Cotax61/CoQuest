/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

#include <stdlib.h>
#include "my.h"

char *my_three_append(char *s1, char *s2, char *s3)
{
    char *new = malloc(sizeof(char) * my_strlen(s1) + my_strlen(s2) + 
    my_strlen(s3) + 1);
    int i = 0;

    for (; s1 != NULL && s1[i]; i++)
        new[i] = s1[i];
    for (int j = 0; s2 != NULL && s2[j]; i++, j++)
        new[i] = s2[j];
    for (int j = 0; s3 != NULL && s3[j]; i++, j++)
        new[i] = s3[j];
    new[i] = '\0';
    return (new);
}