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

    while (++i < height) {
        map_arr[i] = my_strndup(map + j, get_width(map + j) + 1);
        j += get_width(map + j) + 1;
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
    long long size = get_byte_size(src);
    char *map = read_map(src, size);
    vector2i_t dim = get_dim(map);
    char **map_arr = map_to_lines(map, dim.y);
    vector2i_t *o_arr = find_o(map_arr);
    int restart = -1;

    check_box_blocked(map_arr, dim);
    restart = start_disp(map_arr, o_arr, dim, restart);
    free_map(map, map_arr, o_arr);
    if (restart == 2)
        restart = init_game(src);
    return (restart);
}

int main (int ac, char **av)
{
    int game_status = 1;
    if (ac != 2)
        return (84);
    else
        game_status = init_game(av[1]);
    return (game_status);
}