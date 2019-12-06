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

void free_map_arr(char **map_arr)
{
    int i = -1;

    while (map_arr[++i] != NULL)
        free(map_arr[i]);
}

void reset_o(char **map_arr, vector2i_t *o_arr)
{
    vector2i_t pos = o_arr[0];
    int i = 0;

    while (pos.x != 0 && pos.y != 0) {
        if (map_arr[pos.y][pos.x] == ' ')
            map_arr[pos.y][pos.x] = 'O';
        pos = o_arr[i];
        i++;
    }
}

void display(int width, int height, char **map_arr, vector2i_t *o_arr)
{
    int play = 1;
    int i = -1;

    initscr();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    while (play) {
        clear();
        reset_o(map_arr, o_arr);
        while (++i < height)
            mvprintw(LINES/2 - height/2 + i, COLS/2 - width/2, map_arr[i]);
        i = -1;
        key_event(map_arr, getch(), &play);
        refresh();
    }
    curs_set(TRUE);
    endwin();
}

int main (int ac, char **av)
{
    if (ac != 2)
        return (84);
    long long size = get_byte_size(av[1]);
    char *map = read_map(av[1], size);
    int width = get_width(map);
    int height = get_height(map);
    char **map_arr = map_to_lines(map, height);
    vector2i_t *o_arr = find_o(map_arr);

    display(width, height, map_arr, o_arr);
    return (0);
}