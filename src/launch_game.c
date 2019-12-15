/*
** EPITECH PROJECT, 2019
** get_map
** File description:
** get_map func
*/

#include "sokoban.h"
#include "my.h"

char **map_to_lines(char const *map, int height)
{
    char **map_arr = malloc(sizeof(char *) * (height + 1));
    int i = -1;
    int j = 0;

    if (map_arr == NULL)
        return (NULL);
    while (++i < height) {
        map_arr[i] = my_strndup(map + j, get_width(map + j) + 1);
        j += get_width(map + j) + 1;
        if (map_arr[i] == NULL)
            return (NULL);
    }
    map_arr[height] = NULL;
    return (map_arr);
}

void free_map(char *map, char **map_arr, vector2i_t *o_arr)
{
    int i = -1;

    while (map_arr[++i] != NULL)
        free(map_arr[i]);
    free(map);
    free(o_arr);
}

vector2i_t get_dim(char *map)
{
    vector2i_t dim;

    dim.y = get_height(map);
    dim.x = get_max_width(map, dim.y);
    return (dim);
}

int init_game(char *src)
{
    char *map = read_map(src);
    vector2i_t dim;
    char **map_arr;
    vector2i_t *o_arr;
    int restart = -1;

    if (map == NULL)
        return (84);
    dim = get_dim(map);
    map_arr = map_to_lines(map, dim.y);
    if (map_arr == NULL)
        return (84);
    o_arr = find_o(map_arr);
    check_box_blocked(map_arr, dim);
    restart = start_disp(map_arr, o_arr, dim, restart);
    free_map(map, map_arr, o_arr);
    if (restart == 2)
        restart = init_game(src);
    return (restart);
}