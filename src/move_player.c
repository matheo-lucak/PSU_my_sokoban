/*
** EPITECH PROJECT, 2019
** get_map
** File description:
** get_map func
*/

#include "sokoban.h"
#include "my.h"

void move_up(char **map_arr, vector2i_t pos)
{
    if (map_arr[pos.y - 1][pos.x] == 'X' &&
        map_arr[pos.y - 2][pos.x] != 'X' &&
        map_arr[pos.y - 2][pos.x] != '#') {
        map_arr[pos.y - 1][pos.x] = ' ';
        map_arr[pos.y - 2][pos.x] = 'X';
    }
    if (map_arr[pos.y - 1][pos.x] != 'X' &&
        map_arr[pos.y - 1][pos.x] != '#') {
        map_arr[pos.y][pos.x] = ' ';
        map_arr[pos.y - 1][pos.x] = 'P';
    }
}

void move_down(char **map_arr, vector2i_t pos)
{
    if (map_arr[pos.y + 1][pos.x] == 'X' &&
        map_arr[pos.y + 2][pos.x] != 'X' &&
        map_arr[pos.y + 2][pos.x] != '#') {
        map_arr[pos.y + 1][pos.x] = ' ';
        map_arr[pos.y + 2][pos.x] = 'X';
    }
    if (map_arr[pos.y + 1][pos.x] != 'X' &&
        map_arr[pos.y + 1][pos.x] != '#') {
        map_arr[pos.y][pos.x] = ' ';
        map_arr[pos.y + 1][pos.x] = 'P';
    }
}

void move_left(char **map_arr, vector2i_t pos)
{
    if (map_arr[pos.y][pos.x - 1] == 'X' &&
        map_arr[pos.y][pos.x - 2] != 'X' &&
        map_arr[pos.y][pos.x - 2] != '#') {
        map_arr[pos.y][pos.x - 1] = ' ';
        map_arr[pos.y][pos.x - 2] = 'X';
    }
    if (map_arr[pos.y][pos.x - 1] != 'X' &&
        map_arr[pos.y][pos.x - 1] != '#') {
        map_arr[pos.y][pos.x] = ' ';
        map_arr[pos.y][pos.x - 1] = 'P';
    }
}

void move_right(char **map_arr, vector2i_t pos)
{
    if (map_arr[pos.y][pos.x + 1] == 'X' &&
        map_arr[pos.y][pos.x + 2] != 'X' &&
        map_arr[pos.y][pos.x + 2] != '#') {
        map_arr[pos.y][pos.x + 1] = ' ';
        map_arr[pos.y][pos.x + 2] = 'X';
    }
    if (map_arr[pos.y][pos.x + 1] != 'X' &&
        map_arr[pos.y][pos.x + 1] != '#') {
        map_arr[pos.y][pos.x] = ' ';
        map_arr[pos.y][pos.x + 1] = 'P';
    }
}