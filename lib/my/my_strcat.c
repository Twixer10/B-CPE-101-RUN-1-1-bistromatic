/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** lib
*/

int my_strlen(char const *str);

char *my_strcat(char *dest , char  const *src)
{
    int i = 0;
    int j = my_strlen(dest);

    while (src[i]) {
        dest[j + i] = src[i];
        i = i + 1;
    }
    return (dest);
}
