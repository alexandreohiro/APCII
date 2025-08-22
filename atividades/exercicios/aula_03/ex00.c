#include <stdio.h>

void imprime(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    // imprime *
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // imprime @@
    for(int i = 1; i <= 2; i++) {
        for(int j = 1; j <= i; j++) {
            printf("@");
        }
        printf("\n");
    }
    // imprime ###
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

    imprime(1);
    imprime(2);
    imprime(3);

    return 0;
}