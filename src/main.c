/*
** EPITECH PROJECT, 2019
** get_map
** File description:
** get_map func
*/

#include "sokoban.h"
#include "my.h"

void disp_h(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap  file representing the warehouse map");
    my_putstr(", containing ‘#’ for walls,\n");
    my_putstr("\t\t‘P’ for the player, ‘X’ ");
    my_putstr("for boxes and ‘O’ for storage locations.\n");
}

int error(char **env)
{
    char *display = "DISPLAY";
    int i = -1;

    if (env[0] == NULL)
        return (84);
    while (env[++i] != NULL)
        if (my_strcmp(env[i], display) == 0)
            return (0);
    return (84);
}

int main(int ac, char **av)
{
    int game_status = 1;

    if (ac == 2 && !my_strcmp(av[1], "-h")) {
        disp_h();
        return (0);
    }
    if (ac != 2)
        return (84);
    else
        game_status = init_game(av[1]);
    return (game_status);
}