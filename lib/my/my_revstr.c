/*
** EPITECH PROJECT, 2020
** MY_STRREV
** File description:
** No Description
*/

int my_strlen2(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen2(str) - 1;
    int rev;

    while (i < j)
    {
        rev = str[i];
        str[i] = str[j];
        str[j] = rev;
        i = i + 1;
        j = j - 1;
    }
    return (str);
}
