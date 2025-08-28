#include <stdio.h>

void decimalParaBinario(int n) {
    int binario[32]; // suporta até 32 bits
    int i = 0;

    // divisão sucessiva por 2
    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    // imprime de trás para frente
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main() {
    int numero;
    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    printf("Binario: ");
    decimalParaBinario(numero);

    return 0;
}