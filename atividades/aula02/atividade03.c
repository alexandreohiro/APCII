/*
    Exercício 3
*/
#include <stdio.h>

int main(void) {
    char string[] = "Hello, World";
    char *inicio = string;
    char *fim = string;

// Avança o ponteiro 'fim' até o final da string
    while (*fim) {
        fim++;
    }

// Diferença de endereços dá o tamanho
    size_t tamanho = fim - inicio;

    printf("Hello, World: %zu\n", tamanho);

    return 0;
}
