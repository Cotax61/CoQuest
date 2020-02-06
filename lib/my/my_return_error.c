/*
** EPITECH PROJECT, 2020
** CoQuest
** File description:
** my_return_error
*/

#include <unistd.h>
#include "my.h"

void *my_return_error(char *error, void *to_return)
{
    write(2, error, my_strlen(error));
    return (to_return);
}