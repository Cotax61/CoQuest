/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

#include <stdlib.h>

static int my_strcutlen(char const *str, char cut)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != cut)
        i++;
    return (i);
}

char *my_strcutdup(char const *src, char cut)
{
    char *str = malloc(sizeof(char) * my_strcutlen(src, cut) + 1);
    int i = 0;

    if (str == NULL)
        return (NULL);
    while (src[i] != '\0' && src[i] != cut) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}