/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 02
    2. Escreva uma função que receba dois parâmetros para receber a cópia de dois números, e um
    terceiro parâmetro do tipo ponteiro para float (float *) para armazenar divisão desses dois
    números no endereço passado como parâmetro. Se o divisor for igual a zero, não faz nada.
*/
#include <stdio.h>

void divisao(double num1, double num2, double *resultado)
{
    if (num2 != 0)
    {
        *resultado = (double)num1 / num2;
    }
    else
    {
        printf("Erro: Divisão por zero!\n");
        *resultado = 0;
        return;
    }
}

int main()
{
    int a, b;

    printf("Escolha o valor de a: ");
    scanf("%d", &a);

    printf("Escolha o valor de b: ");
    scanf("%d", &b);

    double res;

    divisao(a, b, &res);

    printf("Resultado: %.2f\n", res);

    return 0;
}
