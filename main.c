/*
** EPITECH PROJECT, 2020
** BISTROMATIC
** File description:
** NO DESCRIPTION FOUND
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "./include/bistromatic.h"
#include "./include/my.h"

int err_mod(int a, int b)
{
    if (b == 0) {
        my_putstr("syntaxe error");
        exit(EXIT_OPS);
    }
    return (a%b);
}

void count_parenteze(char *s)
{
    int i = 0;
    int a = 0;
    int b = 0;

    while (s[i]) {
        if (s[i] == '(')
            a++;
        if (s[i] == ')')
            b++;
        i++;
    }
    if (a != b) {
        my_strlen(SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
}

char *get_expr(void)
{
    char *buff = malloc(sizeof(char) * BUFF_SIZE + 1);
    int offset = 0;
    int len = 0;

    while ((len = read(0 , buff + offset , BUFF_SIZE - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    count_parenteze(buff);
    if (my_strlen(buff) == 0) {
        my_strlen("syntax error");
        exit(EXIT_FAILURE);
    }
    return (buff);
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;
    int rslt;

    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+-*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    size = my_getnbr(av[3]);
    size = size + 0;
    expr = get_expr();
    rslt = eval_expr(expr);
    my_put_nbr(rslt);
    free (expr);
    return (0);
}
