/*
** EPITECH PROJECT, 2019
** get_map
** File description:
** get_map func
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

long long get_byte_size(char const *filepath)
{
    struct stat *stat_buf = malloc(sizeof(struct stat));
    long long size;

    if (stat_buf == NULL)
        return (-1);
    if (stat(filepath, stat_buf) == 0) {
        size = stat_buf->st_size;
        printf("%lld SIZE\n", size);
    }
    free(stat_buf);
    return (size);
}

int get_width(char const *map)
{
    int i = -1;

    while (map[++i] != '\n');
    return (i);
}

int get_height(char const *map)
{
    int i = -1;
    int j = 0;

    while (map[++i] != '\0') {
        if (map[i] == '\n')
            j++;
    }
    return (j);
}

int get_max_width(char const *map, int height)
{
    int j = -1;
    int i = 0;
    int tmp = 0;
    int width = 0;

    while (i < height && map[++j] != '\0') {
        if (map[j] == '\n') {
            tmp = 0;
            i++;
        }
        if (tmp > width)
            width = tmp;
        tmp++;
    }
    return (width);
}

char *read_map(char const *filepath)
{
    long long size = get_byte_size(filepath);
    char *buffer = NULL;
    int fd = 0;
    if (size == -1)
        return (NULL);
    buffer = malloc(size + 1);
    if (buffer == NULL)
        return (NULL);
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (NULL);
    read(fd, buffer, size);
    buffer[size] = '\0';
    close(fd);
    return (buffer);
}