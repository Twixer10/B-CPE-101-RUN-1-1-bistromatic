/*
** EPITECH PROJECT, 2020
** My Put Str
** File description:
** Print a String
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i += 1;
    }
    return (0);
}
