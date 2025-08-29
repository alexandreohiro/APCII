/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 02 parte 2
    2. Escreva uma função que receba como parâmetro um vetor de inteiros de tamanho n e zere
    todos os números ímpares. 3. Escreva uma função que receba como parâmetro uma string, um caractere de busca e um
    caractere de substituição. A função deve analizar dentro da string todas as correspondências
    desse caractere de busca e substituir a string pelo caractere de substituição.1. Escreva uma função que receba como parâmetro um vetor de inteiros de tamanho n, e um
    vetor de 2 inteiros. A função é responsável por contabilizar o número de números pares e
    ímpares do primeiro vetor e armazenar no segundo vetor a quantidade de números pares no
    índice 0 e os números ímpares no índice 1. 2. Escreva uma função que receba como parâmetro um vetor de inteiros de tamanho n e zere todos os números ímpares.
*/
#include <stdio.h>

void zerarImpares(int vetor[], int n) 
{
    for(int i = 0; i < n; i++) 
    {
        if(vetor[i] % 2 != 0)
            vetor[i] = 0;
    }
}

int main() 
{
    int v[5];

    printf("Digite os valores do vetor (5 elementos):\n");
    
    for(int i = 0; i < 5; i++) 
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    
    zerarImpares(v, 5);
    
    for(int i=0;i<5;i++) printf("%d ", v[i]);

    return 0;
}
