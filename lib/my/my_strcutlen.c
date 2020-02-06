/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strcutlen
*/

int my_strcutlen(char *str, char c)
{
    int i = 0;

    for (; str[i] && str[i] != c; i++);
    return (i);
}