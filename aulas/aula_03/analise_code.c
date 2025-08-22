// Analise de codigo
#include <stdio.h>

void imprime(int x, char c) {
    for (int i = 0; i < x; i++) {
        printf("%c", c);
    }
    printf("\n");
}

void imprime2(int x, char c) {
    for (int i = 1; i <= x; i++) {
        imprime(i, c);
    }
    printf("\n");
}

int main() 
{
    imprime(1, '*');
    imprime(2, '@');
    imprime(3, '#');
    printf("\n");

    imprime2(10, '@');
    
    return 0;
}