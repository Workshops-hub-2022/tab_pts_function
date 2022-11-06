/*
** EPITECH PROJECT, 2022
** pts-function
** File description:
** math
*/

int addition(int a, int b)
{
    return (a + b);
}

int soustraction(int a, int b)
{
    return (a - b);
}

int multiplication(int a, int b)
{
    return (a * b);
}

int division(int a, int b)
{
    return (a / b);
}

int power(int a, int b)
{
    int res = a;
    int index = 1;

    while (index != b) {
        res = res * a;
        index++;
    }

    return (res);
}
