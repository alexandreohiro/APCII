#include <stdio.h>

int main(void) {
    int n = 5;
    int *p = &n;

    printf("Endereço de n: %p\n", &n);
    return 0;
}