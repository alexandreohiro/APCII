/*
Exercicio 01 - Alexandre Vieira Da Silva - 2512130008
*/
#include <stdio.h>

void exibir_equacao_geral_da_reta(double x1, double y1, double x2, double y2) // Fórmulas: a = y1 - y2; b = x2 - x1; c = x1*y2 - x2*y1
{
    double a = y1 - y2;
    double b = x2 - x1;
    double c = x1 * y2 - x2 * y1;

    printf("Equacao geral da reta: ");
    printf("%.4f*x ", a);

    if (b >= 0) printf("+ %.4f*y ", b);
    else        printf("- %.4f*y ", -b);

    if (c >= 0) printf("+ %.4f = 0\n", c);
    else        printf("- %.4f = 0\n", -c);
}

int main() 
{
    double x1, y1, x2, y2;
    printf("Digite x1 y1 x2 y2: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    exibir_equacao_geral_da_reta(x1, y1, x2, y2);
    return 0;
}
