/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** returns 1 if the number given as parameter is prime and 0 if is not
*/

int my_is_prime(int nb)
{
    int test;
    int i = 2;

    while (i < nb) {
        test = nb % i;
        if (test == 0)
            return (0);
        i += 1;
    }
    return (1);
}
