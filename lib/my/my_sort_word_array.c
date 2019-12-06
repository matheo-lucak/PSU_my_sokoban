/*
** EPITECH PROJECT, 2019
** my_sort_word_array
** File description:
** sort array by ascii order
*/

int my_strcmp(char *s1, char *s2);

int my_arrlen(char **str);

void my_strswap(char **a, char **b)
{
    char *storage;
    storage = *a;
    *a = *b;
    *b = storage;
}

int my_sort_word_array(char **tab)
{
    int i = 0;
    int len = my_arrlen(tab);

    while (i < len - 1) {
        if (my_strcmp(tab[i], tab[i + 1]) > 0) {
            my_strswap(&tab[i], &tab[i + 1]);
            i = -1;
        }
        i += 1;
    }
    return (0);
}
