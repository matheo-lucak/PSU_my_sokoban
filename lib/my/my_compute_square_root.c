/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** returns the square root of the number given as argument
*/

int my_compute_square_root(int nb)
{
    int is_root = 0;
    int i = 0;

    while ( i < 46341 && is_root == 0) {
        i += 1;
        if ((i * i) == nb)
            return (i);
    }
    return (0);
}
