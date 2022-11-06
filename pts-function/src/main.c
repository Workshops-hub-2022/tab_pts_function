/*
** EPITECH PROJECT, 2022
** pts-function
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int main(int ac, char **av)
{
    int res = 0;
    int a;
    int b;
    char action;

    if (ac != 4)
        return (84);

    a = atoi(av[1]);
    b = atoi(av[2]);
    action = av[3][0];

    res = do_math(a, b, action);

    printf("le resultat de %i %c %i = %i\n", a, action, b, res);

    return(0);
}