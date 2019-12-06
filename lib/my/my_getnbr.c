/*
** EPITECH PROJECT, 2019
** my_get_nbr
** File description:
** returns a number sent to the function as a string
*/

int my_pow(int nb, int p);

int my_strlen(char const *str);

int my_getnbr(char *nb_str)
{
    int nb;

    if (nb_str[1] == '\0')
        nb = 0;
    else
        nb = my_getnbr(nb_str + 1);
    return ((nb_str[0] - 48) * my_pow(10, my_strlen(nb_str) - 1) + nb);
}