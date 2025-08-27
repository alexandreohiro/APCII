/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 2
*/
#include <stdio.h>

void divisao(int num1, int num2, float *resultado)  // "declarar" numero um e dois e dividir:
{
    if (num2 != 0) { // se o numero 2 for diferente de zero:
        *resultado = (float)num1 / num2; // dividir numero 1 com numero 2
    }
}

int main() 
{
    int a, b;

    printf("Escolha o valor de a: ");
    scanf("%d", &a);  // recebe a

    printf("Escolha o valor de b: ");
    scanf("%d", &b);  // recebe b

    float res; 

    divisao(a, b, &res);

    printf("Resultado: %.2f\n", res);

    return 0;
}
