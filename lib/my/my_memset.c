/*
** EPITECH PROJECT, 2019
** my_memset
** File description:
** rtfm
*/

void my_memset(char *str, char c, int len)
{
    int i = -1;

    while (++i < len)
        str[i] = c;
}
