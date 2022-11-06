/*
** EPITECH PROJECT, 2022
** pts-function
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// math.c
int addition(int a, int b);
int soustraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int power(int a, int b);

//tab_pts_func.c
char *make_controler_tab();
bool do_math(int a, int b, char action);

#endif /* !MY_H_ */
