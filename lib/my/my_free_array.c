/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_free_array
*/

#include <stdlib.h>

void my_free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
}