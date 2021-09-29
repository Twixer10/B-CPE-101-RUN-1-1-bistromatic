/*
** EPITECH PROJECT, 2020
** my_getnbr_from_ptn
** File description:
** lib
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"

int my_getnbr_from_ptn(char **s)
{
    int rtn = 0;

    while (**s >= 48 && **s <= 57) {
        rtn = rtn * 10;
        rtn = rtn + (**s - '0');
        (*s)++;
    }
    return (rtn);
}
