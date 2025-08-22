/*
Exercicio 01 - Alexandre Vieira Da Silva - 2512130008
*/
#include <stdio.h>

void exibe_data(int dia, int mes, int ano)
{
    printf("%02d", dia);
    switch (mes)
    {
    case 1:
        printf(" de Janeiro de");
        break;
    case 2:
        printf(" de Fevereiro de");
        break;
    case 3:
        printf(" de Marco de");
        break;
    case 4:
        printf(" de Abril de");
        break;
    case 5:
        printf(" de Maio de");
        break;
    case 6:
        printf(" de Junho de");
        break;
    case 7:
        printf(" de Julho de");
        break;
    case 8:
        printf(" de Agosto de");
        break;
    case 9:
        printf(" de Setembro de");
        break;
    case 10:
        printf(" de Outubro de");
        break;
    case 11:
        printf(" de Novembro de");
        break;
    case 12:
        printf(" de Dezembro de");
        break;

    default:
        break;
    }
}

int main()
{
    exibe_data(12, 7, 2023);

    return 0;
}