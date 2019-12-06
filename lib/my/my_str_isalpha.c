/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** rtfm
*/

int my_strlen(char const *string);

int my_str_isalpha(char const *str)
{
    int len = my_strlen(str);
    int i = 0;

    while (i < len) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
            i += 1;
        else
            return (0);
    }
    return (1);
}
