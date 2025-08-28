/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 02 parte 2
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
