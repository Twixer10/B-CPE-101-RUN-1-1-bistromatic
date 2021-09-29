/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** lib
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!((str[i] > 48 && str[i < 57])))
            return (0);
        i = i + 1;
    }
    return (1);
}
