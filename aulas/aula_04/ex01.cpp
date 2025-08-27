#include <stdio.h>

void dobro(int &ref){
    ref = ref * 2;
}

void troca(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int x, y;

    printf("digite o valor de n: ");
    scanf("%d", &n);

    printf("Escolha o valor de x: ");
    scanf("%d", &x);

    printf("Escolha o valor de y: ");
    scanf("%d", &y);

    printf("Antes: x=%d, y=%d\n", x, y);

    troca(&x, &y);

    printf("Depois: x=%d, y=%d\n", x, y);

    int n;

    printf("digite o valor de n: ");
    scanf("%d", &n);

    dobro(n);
    printf("%d\n", n);

    return 0;
}