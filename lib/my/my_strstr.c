/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** lib
*/

char *my_strstr(char *str, char *to_find)
{
    int i = 0;

    if (str[0] != '\0') {
        while (to_find[i] != '\0') {
            if (to_find[i] != str[i])
                return (my_strstr(str + 1, to_find));
            i = i + 1;
        }
        return (str);
    }
    return (0);
}
