/*
** EPITECH PROJECT, 2020
** my_str_isalphanum.c
** File description:
** lib
*/

int my_str_isalphanum(char c)
{
    if (c > 48 && c < 57)
        return (1);
    else if ((c > 64 && c < 91) || (c > 96 && c < 123))
        return (1);
    else
        return (0);
}
