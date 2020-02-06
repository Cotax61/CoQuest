/*
** EPITECH PROJECT, 2020
** CoQuest
** File description:
** main
*/

#include <SFML/Graphics.h>

sfRenderWindow *init_window(void)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1280, 720, 32};

    sfRenderWindow_create(mode, "Test", sfResize | sfClose, NULL);
    return (window);
}

int main(void)
{
    sfRenderWindow *win = init_window();
}