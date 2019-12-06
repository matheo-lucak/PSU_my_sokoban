/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverses a string given as parameter
*/

int my_strlen(char const *string);

char *my_revstr(char *str)
{
    int last_char;
    char temp;
    int len = my_strlen(str);
    int i = 0;

    while (i < (len / 2)) {
        last_char = len - i - 1;
        temp = str[i];
        str[i] = str[last_char];
        str[last_char] = temp;
        i++;
    }
    return (str);
}
