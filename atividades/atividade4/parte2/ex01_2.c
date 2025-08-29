/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 01 parte 2
    1. Escreva uma função que receba como parâmetro um vetor de inteiros de tamanho n, e um
    vetor de 2 inteiros. A função é responsável por contabilizar o número de números pares e
    ímpares do primeiro vetor e armazenar no segundo vetor a quantidade de números pares no
    índice 0 e os números ímpares no índice 1.
*/
#include <stdio.h>

void contarParImpar(int vetor[], int n, int resultado[2])
{
    resultado[0] = 0; // pares
    resultado[1] = 0; // ímpares

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
            resultado[0]++;
        else
            resultado[1]++;
    }
}

int main()
{
    int v[6];
    int res[2];

    printf("Digite os 6 valores do vetor:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    contarParImpar(v, 6, res);

    printf("Pares: %d, Ímpares: %d\n", res[0], res[1]);

    return 0;
}
