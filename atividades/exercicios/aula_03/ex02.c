/*
Exercicio 02 - Alexandre Vieira Da Silva - 2512130008
*/
#include <stdio.h>

double volume_esfera(double raio) {
    return (4.0 / 3.0) * 3.14159 * raio * raio * raio;
}

int main() {
    float raio = 4.5;

    printf("\nO volume da esfera de raio %.2f eh: %.2f\n", raio, volume_esfera(raio));

    return 0;
}