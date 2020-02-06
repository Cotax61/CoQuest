/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_add_str_to_array
*/

#include <stdlib.h>

char **my_add_str_to_array(char **arr, char *str)
{
    int i = 0;
    char **new;

    for (; arr[i] != NULL; i++);
    new = malloc(sizeof(char *) * (i + 2));
    new[i + 1] = NULL;
    for (i = 0; arr[i]; i++)
        new[i] = arr[i];
    new[i] = str;
    free(arr);
    return (new);
}