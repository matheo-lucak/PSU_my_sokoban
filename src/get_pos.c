/*
** EPITECH PROJECT, 2019
** get_map
** File description:
** get_map func
*/

#include "sokoban.h"
#include "my.h"

vector2i_t find_player(char **map_arr)
{
    vector2i_t pos;

    pos.x = -1;
    pos.y = -1;
    while (map_arr[++pos.y] != NULL) {
        while (map_arr[pos.y][++pos.x] != '\0') {
            if (map_arr[pos.y][pos.x] == 'P')
                return (pos);
        }
        pos.x = -1;
    }
    pos.x = -1;
    pos.y = -1;
    return (pos);
}

int count_o(char **map_arr)
{
    int i = -1;
    int j = -1;
    int counter = 0;

    while (map_arr[++j] != NULL) {
        while (map_arr[j][++i] != '\0') {
            if (map_arr[j][i] == 'O') {
                counter++;
            }
        }
        i = -1;
    }
    return (counter);
}

vector2i_t *find_o(char **map_arr)
{
    vector2i_t *o_arr = malloc(sizeof(vector2i_t) * (count_o(map_arr) + 1));
    vector2i_t pos;
    int i = -1;

    if (o_arr == NULL)
        return (NULL);
    pos.x = -1;
    pos.y = -1;
    while (map_arr[++pos.y] != NULL) {
        while (map_arr[pos.y][++pos.x] != '\n') {
            if (map_arr[pos.y][pos.x] == 'O')
                o_arr[++i] = pos;
        }
        pos.x = -1;
    }
    return (o_arr);
}