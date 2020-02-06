/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

#include <stdlib.h>

static int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_strndup(char const *src, int len)
{
    char *str = malloc(sizeof(char) * len + 1);
    int i = 0;

    if (str == NULL)
        return (NULL);
    while (src[i] != '\0' && i != len) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}