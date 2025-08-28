/*
Exercicio 02 - Alexandre Vieira Da Silva - 2512130008
*/
#include <stdio.h>

// Verifica se é função y=f(x), senão informa reta vertical
void exibir_funcao_da_reta(double x1, double y1, double x2, double y2) 
{
    double a = y1 - y2;
    double b = x2 - x1;
    double c = x1 * y2 - x2 * y1;

    if (b != 0) { // evita dividir por zero com != 0 (diferente de zero)
        double m = -a / b;
        double n = -c / b;

        printf("Funcao da reta: y = %.6f*x ", m);

        if (n >= 0) printf("+ %.6f\n", n);
        
        else        printf("- %.6f\n", -n);
    } else {
        printf("A reta e vertical (x = %.6f), nao define y=f(x)\n", x1);
    }
}

int main() 
{
    double x1, y1, x2, y2;
    printf("Digite x1 y1 x2 y2: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    exibir_funcao_da_reta(x1, y1, x2, y2);
    return 0;
}
