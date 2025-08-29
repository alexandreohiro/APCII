/*
Exercicio 04 - b) - Alexandre Vieira Da Silva - 2512130008
*/
#include <stdio.h>

#define LARGURA 60
#define ALTURA 20

char tela[LARGURA][ALTURA];

void limpar_tela()
{
    int x, y;
    for (x = 0; x < LARGURA; x++)
    {
        for (y = 0; y < ALTURA; y++)
        {
            tela[x][y] = ' ';
        }
    }
}

int dentro_da_tela(int x, int y)
{
    return (x >= 0 && x < LARGURA && y >= 0 && y < ALTURA);
}

void set_pixel(int x, int y)
{
    if (dentro_da_tela(x, y))
    {
        tela[x][y] = '@';
    }
}

void imprimir_tela()
{
    int x, y;
    for (y = ALTURA - 1; y >= 0; y--)
    {
        for (x = 0; x < LARGURA; x++)
        {
            putchar(tela[x][y]);
        }
        putchar('\n');
    }
}

int arredonda(double v)
{
    if (v >= 0)
        return (int)(v + 0.5);
    else
        return (int)(v - 0.5);
}

// ----------- Função auxiliar (reta) -----------
void desenhar_reta(int x1, int y1, int x2, int y2)
{
    int x, y;
    if (x1 == x2)
    { // vertical
        int y_min = (y1 < y2) ? y1 : y2;
        int y_max = (y1 > y2) ? y1 : y2;
        for (y = y_min; y <= y_max; y++)
            set_pixel(x1, y);
        return;
    }
    if (y1 == y2)
    { // horizontal
        int x_min = (x1 < x2) ? x1 : x2;
        int x_max = (x1 > x2) ? x1 : x2;
        for (x = x_min; x <= x_max; x++)
            set_pixel(x, y1);
        return;
    }

    double a = (double)y1 - (double)y2;
    double b = (double)x2 - (double)x1;
    double c = (double)x1 * (double)y2 - (double)x2 * (double)y1;

    double m = -a / b;
    double n = -c / b;

    double x_min = (x1 < x2) ? x1 : x2;
    double x_max = (x1 > x2) ? x1 : x2;

    double xd;
    for (xd = x_min; xd <= x_max; xd += 0.25)
    {
        double yd = m * xd + n;
        int xi = arredonda(xd);
        int yi = arredonda(yd);
        set_pixel(xi, yi);
    }

    set_pixel(x1, y1);
    set_pixel(x2, y2);
}

// ----------- Função da Questão 4(b) -----------
void desenhar_triangulo(int x1, int y1, int x2, int y2, int x3, int y3)
{
    long long area = (long long)x1 * (y2 - y3) + (long long)x2 * (y3 - y1) + (long long)x3 * (y1 - y2);

    if (area == 0)
    {
        printf("Os pontos sao colineares. Nao formam triangulo.\n");
        return;
    }

    desenhar_reta(x1, y1, x2, y2);
    desenhar_reta(x2, y2, x3, y3);
    desenhar_reta(x3, y3, x1, y1);
}

int main()
{
    limpar_tela();

    int x1, y1, x2, y2, x3, y3;
    printf("Digite os pontos x1 y1 x2 y2 x3 y3: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    desenhar_triangulo(x1, y1, x2, y2, x3, y3);
    imprimir_tela();

    return 0;
}
