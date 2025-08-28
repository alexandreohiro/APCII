/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 3
*/
#include <stdio.h>

void zerar_Impares(int vetor[], int n) 
{
    for(int i = 0; i < n; i++) {
        if(vetor[i] % 2 != 0)
            vetor[i] = 0;
    }
}

int main() 
{
    int v[] = {1,2,3,4,5};

    zerar_Impares(v, 5);
    
    for(int i=0;i<5;i++) printf("%d ", v[i]);

    return 0;
}
