/*
** EPITECH PROJECT, 2019
** my_intlen
** File description:
** return len of an int arr
*/

int my_intlen(int *tab)
{
    int i = 0;

    while (tab[i] != 0)
        i += 1;
    return (i);
}
