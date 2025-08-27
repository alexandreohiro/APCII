#include <stdio.h>

void contarParImpar(int vetor[], int n, int resultado[2]) {
    resultado[0] = 0; // pares
    resultado[1] = 0; // ímpares
    for(int i = 0; i < n; i++) {
        if(vetor[i] % 2 == 0)
            resultado[0]++;
        else
            resultado[1]++;
    }
}

int main() {
    int v[] = {1,2,3,4,5,6};
    int res[2];
    contarParImpar(v, 6, res);
    printf("Pares: %d, Ímpares: %d\n", res[0], res[1]);
    return 0;
}
