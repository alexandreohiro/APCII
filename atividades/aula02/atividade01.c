/*
    Exercício 1
*/
#include <stdio.h>

int main(void) {
    char vet[15] = {1,2,3,4,5,6,7,8,9};

    char *p = vet;
    for (int i = 0; i < 10; i++) {
        printf("vet[%d] = %d\n", i, *(p + i));
    }
    printf("\n");

    return 0;
}