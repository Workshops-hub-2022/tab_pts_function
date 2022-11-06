/*
** EPITECH PROJECT, 2022
** pts-function
** File description:
** tab_pts_func
*/

#include "my.h"

bool do_math(int a, int b, char action)
{
    bool error = true;
    char *controler = "+-*/^";
    int index = 0;
    int res = 0;
    int (*tab[5])(int, int) = {
        &addition,          // addition
        &soustraction,      // soustraction
        &multiplication,    // multiplication
        &division,          // division
        &power              // power
    };

    while (controler[index] != '\0'){
        if (controler[index] == action) {
            res = tab[index](a, b);
            error = false;
            printf("le resultat de %i %c %i = %i\n", a, action, b, res);
        }
        index++;
    }
    return (error);
}