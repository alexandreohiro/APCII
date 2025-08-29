#include <stdio.h>

void decimalParaHexa(int n) 
{
    char hexa[32];
    int i = 0;

    while (n > 0) 
    {
        int resto = n % 16;
        if (resto < 10)
            hexa[i] = resto + '0';   // converte para caractere '0'-'9'
        else
            hexa[i] = resto - 10 + 'A'; // converte para 'A'-'F'
        n = n / 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) // imprime de trás para frente
    {
        printf("%c", hexa[j]);
    }
}

int main() 
{
    int numero;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    printf("Hexadecimal: ");

    decimalParaHexa(numero);

    return 0;
}