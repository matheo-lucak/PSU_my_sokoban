/*
** EPITECH PROJECT, 2019
** duck_hunth
** File description:
** header for duck hunt
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef LAUNCHER_H_
#define LAUNCHER_H_

typedef struct vector2i
{
    int x;
    int y;
} vector2i_t;

void move_up(char **map_arr, vector2i_t pos);
void move_down(char **map_arr, vector2i_t pos);
void move_left(char **map_arr, vector2i_t pos);
void move_right(char **map_arr, vector2i_t pos);

long long get_byte_size(char const *filepath);
int get_width(char const *map);
int get_height(char const *map);
char *read_map(char const *filepath, long long size);

int count_o(char **map_arr);
vector2i_t *find_o(char **map_arr);
void reset_o(char **map_arr, vector2i_t *o_arr);
vector2i_t find_player(char **map_arr);
void key_event(char **map_arr, int key, int *play);

#endif /* !LAUNCHER_H_ */
