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

vector2i_t get_dim(char *map);
long long get_byte_size(char const *filepath);
int get_width(char const *map);
int get_max_width(char const *map, int height);
int get_height(char const *map);
char *read_map(char const *filepath);
char **map_to_lines(char const *map, int height);

int count_o(char **map_arr);
vector2i_t *find_o(char **map_arr);
vector2i_t find_player(char **map_arr);
void key_event(char **map_arr, int key, int *play);

int check_win(char **map_arr, vector2i_t *o_arr);
void check_o(char **map_arr, vector2i_t *o_arr);
int check_box_blocked(char **map_arr, vector2i_t dim);

int start_disp(char **map_arr, vector2i_t *o_arr, vector2i_t dim, int restart);
int init_game(char *src);

#endif /* !LAUNCHER_H_ */
