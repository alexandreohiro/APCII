/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 1
*/
#include <stdio.h>

void troca(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int x, y;

    printf("Escolha o valor de x: ");
    scanf("%d", &x);

    printf("Escolha o valor de y: ");
    scanf("%d", &y);

    printf("Antes: x=%d, y=%d\n", x, y);

    troca(&x, &y);

    printf("Depois: x=%d, y=%d\n", x, y);

    return 0;
}
