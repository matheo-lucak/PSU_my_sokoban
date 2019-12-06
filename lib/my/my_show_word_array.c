/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** displays the content of an array of words
*/

int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != 0) {
        my_putstr(tab[i]);
        i += 1;
    }
    return (0);
}
