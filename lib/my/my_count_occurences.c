/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_count_occurences
*/

int my_count_occurences(char *str, char c)
{
    int occurs = 0;

    for (int i = 0; str[i]; i++)
        occurs += (str[i] == c) ? 1 : 0;
    return (occurs);
}