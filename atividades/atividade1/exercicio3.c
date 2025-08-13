/*
    Alexandre Vieira Da Silva
    2512130008
    Exercício 2
*/
#include <stdio.h>

int main() {
    int n1 = 3, n2 = 5;
    int *p1 = &n1, *p2 = &n2;
    int aux = *p1;

    *p1 = *p2;
    *p2 = aux;

    printf("n1 ---> %d\nn2 ---> %d\n", n1, n2);

    return 0;
}