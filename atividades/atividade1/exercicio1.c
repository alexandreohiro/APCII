/*
    Alexandre Vieira Da Silva
    2512130008
    Exercício 1
*/
#include <stdio.h>

int main() {
    int i = 5;
    int *p;

    p - &i;

    printf("&p = %p\n", &p);
    printf("p (&i - endereço de i): %p\n", p);
    printf("*p (i - valor de i): %d\n", *p);

    *p = 7;

    printf("\n");
    printf("&p = %p\n", &p);
    printf("p (&i - endereço de i): %p\n", p);
    printf("*p (i - valor de i): %d\n", *p);

    return 0;
}