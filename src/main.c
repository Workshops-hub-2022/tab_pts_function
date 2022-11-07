/*
** EPITECH PROJECT, 2022
** pts-function
** File description:
** main
*/

#include "my.h"

bool is_number(char *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] <= '0' && str[index] >= '9') {
            return (false);
        }
        index++;
    }
    return (true);
}

bool is_error_in_arg(int ac, char **av)
{
    if (ac != 4)
        return (true);
    if (!is_number(av[1]) && !is_number(av[2]))
        return (true);
    if (av[3][0] == '/' && av[2][0] == '0')
        return (true);
    return (false);
}

int main(int ac, char **av)
{
    int a = 0;
    int b = 0;
    char action = '\0';

    if (is_error_in_arg(ac, av))
        return (84);

    a = atoi(av[1]);
    b = atoi(av[2]);
    action = av[3][0];

    do_math(a, b, action);

    return(0);
}