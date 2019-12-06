/*
** EPITECH PROJECT, 2019
** my_strcpaddress
** File description:
** copies a string into another
*/

int my_strlen(char const *string);

char *my_strcpaddress(char **dest, char const *src)
{
    int len = my_strlen(src);
    int i = 0;
    while ((*dest)[i] != '\0') {
        (*dest)[i] = '\0';
        i++;
    }
    i = 0;
    while (i < len) {
        (*dest)[i] = src[i];
        i++;
    }
    (*dest)[i] = '\0';
    return (*dest);
}
