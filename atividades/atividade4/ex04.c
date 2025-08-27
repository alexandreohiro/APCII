#include <stdio.h>

void zerarImpares(int vetor[], int n) {
    for(int i = 0; i < n; i++) {
        if(vetor[i] % 2 != 0)
            vetor[i] = 0;
    }
}

int main() {
    int v[] = {1,2,3,4,5};
    zerarImpares(v, 5);
    for(int i=0;i<5;i++) printf("%d ", v[i]);
    return 0;
}
