/*
Exercicio 05 - Alexandre Vieira Da Silva - 2512130008
*/
#include <stdio.h>

int fatorial(int num) {
    int fat = 1;
    for (int i = 1; i<= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int num = 10;

    printf("\nO fatorial de %d eh: %d\n", num, fatorial(num));
}