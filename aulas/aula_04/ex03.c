/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 3
*/
#include <stdio.h>

void contar_Par_Impar(int vetor[], int n, int resultado[2]) 
{
    resultado[0] = 0; // pares
    resultado[1] = 0; // ímpares
    for(int i = 0; i < n; i++) {
        if(vetor[i] % 2 == 0)
            resultado[0]++;
        else
            resultado[1]++;
    }
}

int main() 
{
    int v[] = {1,2,3,4,5,6};
    int res[2];
    
    contar_Par_Impar(v, 6, res);
    
    printf("Pares: %d, Ímpares: %d\n", res[0], res[1]);

    return 0;
}
