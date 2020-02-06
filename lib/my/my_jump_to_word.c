/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_jump_to_word
*/

int my_jump_to_word(char *str, int *i)
{
    for (; str[*i] && str[*i] == ' '; *i++);
    return (*i);
}