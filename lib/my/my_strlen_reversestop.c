/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strlen_reversestop
*/

int my_strlen_reversestop(char *str, char c)
{
    int i = 0;

    for (; str[i]; i++);
    for (; i != 0 && str[i] != c; i--);
    return (i + 1);
}