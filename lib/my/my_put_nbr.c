/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** displays the number given as parameter
*/

void my_putchar(char c);

int is_neg(int nb)
{
    if (nb < 0)
        nb *= -1;
    return (nb);
}

int get_char_nb(int nb, int base)
{
    int div_result = 1;
    int char_nb = 0;
    int base_nb = base;

    if (nb < 0)
        char_nb = -1;
    while (div_result != 0) {
        div_result = nb / base_nb;
        base_nb *= base;
        char_nb += 1;
    }
    return (char_nb);
}

int power_nb(int nb, int char_nb, int base)
{
    int i = 1;

    while (i < char_nb) {
        nb *= base;
        i += 1;
    }
    return (nb);
}

int my_put_nbr(int nb)
{
    char *str_base = "0123456789";
    int base = 10;
    int counter = 0;
    int char_nb = get_char_nb(nb, base);
    int nb_divider = power_nb(1, char_nb, base);
    int nb_modified = nb;
    nb = is_neg(nb);

    while (counter++ < char_nb) {
        my_putchar(str_base[(nb_modified / nb_divider)]);
        nb_modified = nb - ((nb / nb_divider) * nb_divider);
        nb_divider = nb_divider / base;
    }
    return (0);
}