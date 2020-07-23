/*
** EPITECH PROJECT, 2020
** sdfbgh
** File description:
** qdsfdbvb
*/

#include "my.h"

char **malloc_map(char *str)
{
    int x = 0;
    int fd = open(str, O_RDONLY);
    char *buff = open_read(fd, str);
    char **mp = NULL;

    mp = malloc(sizeof(char *) * 31);
    malloc_mp(mp);
    for (int i = 0; i != 17; i++){
        for (int j = 0; j != 31; j++) {
            mp[i][j] = buff[x];
            x++;
        }
        x++;
    }
    close(fd);
    return mp;
}

void malloc_mp(char **map)
{
    for (int count = 0; count != 31; count++) {
        map[count] = malloc(sizeof(char) * 31);
    }
}

char *open_read(int fd, char const *filepath)
{
    int size = 0;
    struct stat buf;
    char *buff = NULL;

    if (fd == -1)
        return NULL;
    stat(filepath, &buf);
    size = buf.st_size;
    buff = malloc(sizeof(char) * (size + 1));
    buff[size] = '\0';
    read(fd, buff, size);
    return buff;
}