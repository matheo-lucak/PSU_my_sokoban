/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** rtfm
*/

void my_swap(int *a, int *b);

int my_intlen(int *tab);

void my_sort_int_array(int *tab, int size)
{
    int i = 0;

    while (i < size) {
        if ((tab[i] - tab[i + 1]) > 0) {
            my_swap(&tab[i], &tab[i + 1]);
            i = -1;
        }
        i += 1;
    }
}
