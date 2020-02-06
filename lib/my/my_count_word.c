/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_count_word
*/

int my_count_word(char *str)
{
    int words = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ')
            words++;
        for (; str[i] != ' ' && str[i]; i++);
        for (; str[i] == ' ' && str[i]; i++);
    }
    return (words);
}