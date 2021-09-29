/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** lib
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(str[i] >= 65 && str[i] <= 90))
            return (0);
        i = i + 1;
    }
    return (1);
}
