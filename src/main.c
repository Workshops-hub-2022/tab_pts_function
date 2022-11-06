/*
** EPITECH PROJECT, 2022
** pts-function
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    int a = 0;
    int b = 0;
    char action = '\0';

    if (ac != 4)
        return (84);

    a = atoi(av[1]);
    b = atoi(av[2]);
    action = av[3][0];

    if (do_math(a, b, action) == true) {
        printf("Operationn invalide\n");
        return (84);
    }

    return(0);
}