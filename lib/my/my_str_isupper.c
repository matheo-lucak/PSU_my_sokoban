/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** rtfm
*/

int my_strlen(char const *string);

int my_str_isupper(char const *str)
{
    int len = my_strlen(str);
    int i = 0;

    while (i < len) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i += 1;
        else
            return (0);
    }
    return (1);
}
