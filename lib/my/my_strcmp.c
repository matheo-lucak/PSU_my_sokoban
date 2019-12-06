/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** compares the fst difference between two strings by returning the difference
*/

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i])
            return (1);
        if (s1 [i] < s2[i])
            return (-1);
        i += 1;
    }
    return (0);
}
