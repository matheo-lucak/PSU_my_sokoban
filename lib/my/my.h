/*
** EPITECH PROJECT, 2019
** my
** File description:
** my header file
*/

#ifndef MY_H
#define MY_H

int my_pow(int nb, int p);
float my_powf(float nb, float p);
int my_getnbr(char *nb_str);
int my_isneg(int n);
char *my_revstr(char *str);
int my_show_word_array(char * const *tab);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strlowcase(char *str);
char *my_strstr(char *str, char *to_find);
char **my_str_to_word_array(char const *str);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char *my_strdup_word(char const *str, int *i);
int my_arrlen(char **str);
int my_intlen(int *tab);
char *my_strcpaddress(char **dest, char const *src);
void my_memset(char *str, char c, int len);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void my_put_char(char nb, char *base, int sizebase);
void my_put_uchar(unsigned char nb, char *base, int sizebase);
void my_put_short(short nb, char *base, int sizebase);
void my_put_ushort(unsigned short nb, char *base, int sizebase);
void my_put_int(int nb, char *base, int sizebase);
void my_put_uint(unsigned int nb, char *base, int sizebase);
void my_put_long(long nb, char *base, int sizebase);
void my_put_ulong(unsigned long int nb, char *base, int sizebase);
void my_put_long_long(long long nb, char *base, int sizebase);
void my_put_ulong_long(unsigned long long nb, char *base, int sizebase);
int my_put_address(void *ptr);
char *my_int_to_str(int nb);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int n);
char *my_strdup(char *src);
char *my_strndup(char const *src, int n);

#endif
