#include <stdio.h>

int main() {
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // tirar a media dos elementos pares 
    int soma = 0, count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (num[i][j] % 2 == 0) {
                soma += num[i][j];
                count++;
            }
        }
    }   
    double media = (count > 0) ? (double)soma / count : 0.0;
    printf("Média dos elementos pares: %.2f\n", media);

    int *p = &num[0][0]; // Ponteiro para o início da matriz
    // ou isso ;
    // int *p = (int *)num; // Ponteiro para o início da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("num[%d][%d] = %d\n", i, j, *(p + i * 4 + j));
        }
    }
    printf("\n");
    // mapear linha e coluna para o índice do vetor unidimensional

    printf("Tamanho da matriz: %zu bytes\n", sizeof(num));
    printf("Número de elementos: %zu\n", sizeof(num) / sizeof(num[0][0]));
    printf("Tamanho de um elemento: %zu bytes\n", sizeof(num[0][0]));
    printf("Número de linhas: %zu\n", sizeof(num) / sizeof(num[0]));
    printf("Número de colunas: %zu\n", sizeof(num[0]) / sizeof(num[0][0]));

    // (lin *4 + col) * sizeof(int)

    // worn é o que o professor falou na aula
    // int *p = (int *)num; // Ponteiro para o início da matriz
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         printf("num[%d][%d] = %d\n", i, j, *(p + i * 4 + j));
    //     }
    // }
    // printf("\n"); 
    return 0;
}