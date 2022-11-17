/*
** EPITECH PROJECT, 2022
** pts-function
** File description:
** tab_pts_func
*/

#include "my.h"

void do_math(int a, int b, char action)
{
    int index = 0;
    int res = 0;
    char *controler = "+-*/^";

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
            printf("Le resultat de %i %c %i = %i\n", a, action, b, res);
            return;
        }
        index++;
    }
    printf("Operation inconnue\n");
}