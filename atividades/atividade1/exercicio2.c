/*
    Alexandre Vieira Da Silva
    2512130008
    Exercício 2
*/
#include <stdio.h>

int main() {
    int numero;
    int *p = &numero;

    *p = 5;

    printf("&p       -------> %p\n", &p);
    printf("&numero  -------> %p\n", &numero);
    printf("Valor da variável 'numero' -------> %d\n", numero);
    printf("*p (valor apontado pelo ponteiro) -> %d\n", *p);

    return 0;
}