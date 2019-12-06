/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swaps the content of two integers whose adresses are given as parameter
*/

void my_swap(int *a, int *b)
{
    int storage;

    storage = *a;
    *a = *b;
    *b = storage;
}
