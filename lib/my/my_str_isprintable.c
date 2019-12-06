/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** rtfm
*/

int my_strlen(char const *string);

int my_str_isprintable(char const *str)
{
    int len = my_strlen(str);
    int i = 0;

    while (i < len) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9'))
            i += 1;
        else
            return (0);
    }
    return (1);
}
