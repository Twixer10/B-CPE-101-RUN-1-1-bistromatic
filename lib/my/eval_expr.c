/*
** EPITECH PROJECT, 2020
** eval_expr.c
** File description:
** lib
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"
#include "../../include/bistromatic.h"

int err_div(int a, int b)
{
    if (b == 0) {
        my_putstr("syntaxe error");
        exit(EXIT_OPS);
    }
    return (a/b);
}

int high(char **expr)
{
    int nbr = 0;
    int nbr2 = 0;
    char op;

    nbr = entier(expr);
    while (**expr) {
        op = **expr;
        if (op != '/' && op != '*' && op != '%')
            return (nbr);
        (*expr)++;
        nbr2 = entier(expr);
        if (op == '/')
            nbr = err_div(nbr, nbr2);
        else if (op == '*')
            nbr = nbr * nbr2;
        else
            nbr = err_mod(nbr, nbr2);
    }
    return (nbr);
}

int entier(char **expr)
{
    int nbr = 0;

    if (**expr == '(') {
        (*expr)++;
        nbr = low(expr);
        if (**expr == ')') {
            (*expr)++;
        }
        return (nbr);
    }
    return (my_getnbr_from_ptn(expr));
}

int low(char **expr)
{
    int nbr = 0;
    int nbr2 = 0;
    char op;

    nbr = high(expr);
    while (**expr) {
        while (**expr == ' ')
            (*expr)++;
        op = **expr;
        if (op != '+' && op != '-')
            return (nbr);
        (*expr)++;
        nbr2 = high(expr);
        if (op == '+')
            nbr = nbr + nbr2;
        else
            nbr = nbr - nbr2;
    }
    return (nbr);
}

int eval_expr(char *expr)
{
    int i = low(&expr);
    return (i);
}
