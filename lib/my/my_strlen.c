/*
** EPITECH PROJECT, 2020
** My Put Str
** File description:
** Print a String
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
    {
        i += 1;
    }
    return (i);
}
