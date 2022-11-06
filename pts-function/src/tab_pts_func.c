/*
** EPITECH PROJECT, 2022
** pts-function
** File description:
** tab_pts_func
*/

#include <stdlib.h>
#include "my.h"

char *make_controler_tab(void)
{
    char *tab = malloc(sizeof(char) * 5);

    if (tab == NULL)
        return (NULL);
    
    tab[0] = '+';   // addition
    tab[1] = '-';   // soustraction
    tab[2] = '*';   // multiplication
    tab[3] = '/';   // division
    tab[4] = '^';   // power

    return (tab);
}


int do_math(int a, int b, char action)
{
    int index = 0;
    int res = 0;
    int (*tab[5])(int, int) = {
        &addition,          // addition
        &soustraction,      // soustraction
        &multiplication,    // multiplication
        &division,          // division
        &power              // power
    };
    char *controler = make_controler_tab();

    if (controler == NULL)
        return (84);
    while (controler[index] != '\0'){
        if (controler[index] == action) {
            res = tab[index](a, b);
        }
        index++;
    }
    free(controler);
    return (res);
}