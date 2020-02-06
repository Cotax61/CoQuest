/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_remove_str_from_array
*/

#include <stdlib.h>
#include "my.h"

char **my_remove_str_from_array(char **arr, char *str)
{
    int i = 0;
    int j = 0;
    char **new = NULL;

    for (; arr[i]; i++)
    new = malloc(sizeof(char *) * (i + 2));
    for (i = 0; arr[i]; i++) {
        if (arr[i] == str)
            free(arr[i]);
        else {
            new[j] = arr[i];
            j++;
        }
    }
    new[j] = NULL;
    free(arr);
    return (new);
}