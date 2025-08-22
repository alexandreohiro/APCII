/*
    Exercício 2
*/
#include <stdio.h>

int main(void) {
    char str[] = "Aula de APC II";

    int i = 0;
    char *p = str;
    while (*(p + i) != '\0') {
        printf("str[%d] = %c\n", i, *(p + i));
        i++;
    }
    printf("\n");

    return 0;
}