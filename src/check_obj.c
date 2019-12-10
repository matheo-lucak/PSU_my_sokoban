/*
** EPITECH PROJECT, 2019
** get_map
** File description:
** get_map func
*/

#include "sokoban.h"
#include "my.h"

void check_o(char **map_arr, vector2i_t *o_arr)
{
    vector2i_t pos = o_arr[0];
    int i = 0;

    while (pos.x != 0 && pos.y != 0) {
        if (map_arr[pos.y][pos.x] == ' ')
            map_arr[pos.y][pos.x] = 'O';
        i++;
        pos = o_arr[i];
    }
}

int check_win(char **map_arr, vector2i_t *o_arr)
{
    vector2i_t pos = o_arr[0];
    int i = 0;
    int counter = 0;

    while (pos.x != 0 && pos.y != 0) {
        if (map_arr[pos.y][pos.x] == 'X')
            counter++;
        i++;
        pos = o_arr[i];
    }
    if (counter == i)
        return (1);
    return (0);
}

int check_box_corner(char **map, vector2i_t pos)
{
    int corner = 0;

    if (map[pos.y - 1][pos.x] == '#' || map[pos.y - 1][pos.x] == 'X') {
        corner++;
    } else if (map[pos.y + 1][pos.x] == '#' || map[pos.y + 1][pos.x] == 'X') {
        corner++;
    }
    if (map[pos.y][pos.x - 1] == '#' || map[pos.y][pos.x - 1] == 'X') {
        corner++;
    } else if (map[pos.y][pos.x + 1] == '#' || map[pos.y][pos.x + 1] == 'X') {
        corner++;
    }
    if (corner >= 2)
        return (1);
    else
        return (0);
}

int check_box_blocked(char **map_arr, vector2i_t dim)
{
    vector2i_t pos;
    int blocked_box = 0;
    int box_nb = 0;

    pos.x = 0;
    pos.y = 0;
    while (++pos.y < dim.y) {
        while (map_arr[pos.y][++pos.x] != '\n') {
            if (map_arr[pos.y][pos.x] == 'X') {
                box_nb++;
                blocked_box += check_box_corner(map_arr, pos);
            }
        }
    pos.x = 0;
    }
    if (box_nb == blocked_box)
        return (1);
    return (0);
}
