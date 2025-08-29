/*
Exercicio 03 - Alexandre Vieira Da Silva - 2512130008
*/
#include <stdio.h>

double y_val(double x1, double y1, double x2, double y2, double x) // Retorna f(x) ou encerra se for reta vertical
{
    double a = y1 - y2;
    double b = x2 - x1;
    double c = x1 * y2 - x2 * y1;

    if (b == 0)
    {
        printf("Erro: reta vertical em x = %.6f, nao existe y=f(x).\n", x1);
        return 0; // aqui não uso exit(), só retorno 0 como fallback
    }

    double m = -a / b;
    double n = -c / b;
    return m * x + n;
}

int main()
{
    double x1, y1, x2, y2, x;

    printf("Digite x1 y1 x2 y2: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    switch ((x1 == x2) + 2 * (y1 == y2))
    {
    case 0: // pontos distintos
    case 1: // x1 == x2 (reta vertical)
    case 2: // y1 == y2 (reta horizontal)
        break;
    case 3: // pontos iguais
        printf("Erro: os pontos sao iguais, nao definem uma reta.\n");
        return 1;
    }

    if (x2 != x1)
    { // só calcula se não for vertical
        double y = y_val(x1, y1, x2, y2, x);
        printf("y(%.2f) = %.6f\n", x, y);
    }
    else
    {
        printf("Nao foi possivel calcular y=f(x) pois a reta e vertical.\n");
    }

    return 0;
}
