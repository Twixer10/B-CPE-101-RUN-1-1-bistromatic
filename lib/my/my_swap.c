/*
** EPITECH PROJECT, 2020
** My Swap
** File description:
** Swaps the content of two integers
*/

void my_swap(int *a, int *b)
{
    int c = *b;

    *b = *a;
    *a = c;
}
