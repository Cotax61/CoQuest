/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

#include <stdlib.h>

static int my_str_cutlen(char const *str, char cut)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != cut)
        i++;
    return (i);
}

char *my_str_dupword(char const *src, int *i)
{
    char *str = malloc(sizeof(char) * my_str_cutlen(src + *i, ' ') + 1);
    int n = 0;

    if (str == NULL)
        return (NULL);
    for (; src[*i] != '\0' && src[*i] != ' '; n++) {
        str[n] = src[*i];
        (*i)++;
    }
    str[n] = '\0';
    return (str);
}