/*
** EPITECH PROJECT, 2019
** get_map
** File description:
** get_map func
*/

#include "sokoban.h"
#include "my.h"

void move_event(char **map_arr, int key)
{
    vector2i_t pos = find_player(map_arr);

    switch (key) {
        case KEY_UP:
            move_up(map_arr, pos);
            return ;
        case KEY_DOWN:
            move_down(map_arr, pos);
            return ;
        case KEY_LEFT:
            move_left(map_arr, pos);
            return ;
        case KEY_RIGHT:
            move_right(map_arr, pos);
            return ;
        default:
            return ;
    }
}

void key_event(char **map_arr, int key, int *restart)
{
    if (key == KEY_UP || key == KEY_DOWN ||
        key == KEY_LEFT || key == KEY_RIGHT)
        move_event(map_arr, key);
    if (key == ' ')
        *restart = 2;
    if (key == 'q')
        *restart = 3;
}