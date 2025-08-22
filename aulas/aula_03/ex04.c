/*
Exercicio 04 - Alexandre Vieira Da Silva - 2512130008
*/
#include <stdio.h>

int divisivel_seis(int num) {
    if (num % 6 == 0) {
        return 1;
    } else {
        return 0;
    };
}

int main() {
    if (divisivel_seis(12)) {
        printf("12 eh divisivel por 6\n");
    } else {
        printf("12 nao eh divisivel por 6\n");
    }

    return 0;
}