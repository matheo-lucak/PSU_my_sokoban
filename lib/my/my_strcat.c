/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenate two strings
*/
#include <stdio.h>

int my_strlen(char const *string);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len_dest = my_strlen(dest);

    while (src[i] != '\0') {
        dest[len_dest + i] = src[i];
        i += 1;
    }
    dest[len_dest + i] = '\0';
    return (dest);
}