/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** lib
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i = i + 1;
    }
    i = 0;
    while (str[i]) {
        if (str[0] >= 97 && str[0] <= 122)
            str[0] = str[0] - 32;
        if (str[i] == 32 || str[i] == 43 || str[i] == 45)
            if (str[i + 1])
                if (str[i + 1] >= 97 && str[i + 1] <= 122)
                    str[i + 1] = str[i + 1] - 32;
        i = i + 1;
    }
    return (str);
}
