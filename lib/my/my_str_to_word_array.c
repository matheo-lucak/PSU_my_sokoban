/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** splits a string into word
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *string);

int my_putstr(char const *str);

int get_word_nbr(char const *str)
{
    int i = 0;
    int word_nbr = 0;

    while (str[i] != '\0') {
        if ((str[i + 1] < 'a' || str[i + 1] > 'z') &&
            (str[i + 1] < 'A' || str[i + 1] > 'Z') &&
            (str[i + 1] < '0' || str[i + 1] > '9') &&
            ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9'))) {
            word_nbr += 1;
            i += 1;
        } else {
            i += 1;
        }
    }
    return (word_nbr);
}

int get_char_number(char const *str, int i)
{
    int char_nbr = 0;

    while ((str[i] >= 97 && str[i] <= 122) ||
            (str[i] >= 65 && str[i] <= 90) ||
            (str[i] >= 48 && str[i] <= 57)) {
        char_nbr += 1;
        i += 1;
    }
    return (char_nbr);
}

char *my_strdup_word(char const *str, int *i)
{
    char *ptr;
    int j = 0;
    int size = get_char_number(str, *i);
    int is_alph = 0;

    ptr = malloc(sizeof(char) * (size + 1));
    while (j < size &&
            ((str[*i] >= 97 && str[*i] <= 122) ||
            (str[*i] >= 65 && str[*i] <= 90) ||
            (str[*i] >= 48 && str[*i] <= 57))) {
        ptr[j] = str[*i];
        *i += 1;
        j += 1;
        is_alph = 1;
    }
    if (is_alph == 0)
        return (NULL);
    else {
        *i -= 1;
        return (&ptr[0]);
    }
}

char **my_str_to_word_array(char const *str)
{
    char **arr = NULL;
    int i = 0;
    int j = 0;
    int len = my_strlen(str);

    arr = malloc(sizeof(char *) * (get_word_nbr(str) + 1));
    if (arr == NULL)
        return (NULL);
    while (i < len) {
        arr[j] =  my_strdup_word(str, &i);
        if (my_strdup_word(str, &i) != NULL)
            j += 1;
        i += 1;
    }
    arr[j] = 0;
    return (arr);
}
