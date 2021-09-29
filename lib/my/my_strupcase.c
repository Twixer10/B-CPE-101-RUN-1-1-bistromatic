/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** lib
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        i = i + 1;
    }
    return (str);
}
