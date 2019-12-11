/*
** EPITECH PROJECT, 2019
** get_map
** File description:
** get_map func
*/

#include "sokoban.h"
#include "my.h"

void disp_resize(void)
{
    char *str1 = "ENLARGE WINDOW";

    clear();
    mvprintw(LINES/2 , COLS/2 - my_strlen(str1)/2, str1);
    refresh();
}

void disp_game(char **map_arr, vector2i_t *o_arr, vector2i_t dim, int *restart)
{
    int i = -1;

    clear();
    check_o(map_arr, o_arr);
    if (check_win(map_arr, o_arr))
        *restart = 0;
    if (check_box_blocked(map_arr, dim))
        *restart = 1;
    while (++i < dim.y)
        mvprintw(LINES/2 - dim.y/2 + i, COLS/2 - dim.x/2, map_arr[i]);
    i = -1;
    key_event(map_arr, getch(), restart);
    refresh();
}

int display(char **map_arr, vector2i_t *o_arr, vector2i_t dim, int restart)
{
    while (restart < 0 || restart > 3) {
        if (LINES < dim.y || COLS < dim.x)
            disp_resize();
        else
            disp_game(map_arr, o_arr, dim, &restart);
    }
    return (restart);
}

int start_disp(char **map_arr, vector2i_t *o_arr, vector2i_t dim, int restart)
{
    initscr();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    restart = display(map_arr, o_arr, dim, restart);
    curs_set(TRUE);
    endwin();
    return (restart);
}