/*
Exercicio 03 - Alexandre Vieira Da Silva - 2512130008
*/
#include <stdio.h>

int converte_segundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos;
}

int main() {
    int horas = 2;
    int minutos = 30;
    int segundos = 15;

    int total_segundos = converte_segundos(horas, minutos, segundos);
    
    printf("Total de segundos: %d\n", total_segundos);

    return 0;
}