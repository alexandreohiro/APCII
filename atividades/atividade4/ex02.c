/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 2
*/
#include <stdio.h>

void divisao(int num1, int num2, float *resultado) 
{
    if (num2 != 0) {
        *resultado = (float)num1 / num2;
    }
}

int main() 
{
    int a, b;

    printf("Escolha o valor de a: ");
    scanf("%d", &a);

    printf("Escolha o valor de b: ");
    scanf("%d", &b);

    float res;

    divisao(a, b, &res);

    printf("Resultado: %.2f\n", res);

    return 0;
}
