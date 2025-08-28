/*
    Alexandre Vieira Da Silva - 2512130008
    Exercício 03 parte 2
*/
#include <stdio.h>
#include <string.h>

void substituirCaractere(char str[], char busca, char substituto) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == busca) 
        {
            str[i] = substituto;
        }
    }
}

int main() 
{
    int d;
    printf("Digite o tamanho do texto: ");
    scanf("%d", &d);
    getchar(); 
    
    char texto[d+1];
    printf("Digite o texto: ");
    fgets(texto, d+1, stdin);
    texto[strcspn(texto, "\n")] = '\0'; // remove \n
    
    char busca, substituto;
    printf("Digite o caractere de busca: ");
    scanf(" %c", &busca);
    printf("Digite o caractere de substituição: ");
    scanf(" %c", &substituto);

    substituirCaractere(texto, busca, substituto);

    printf("Texto final: %s\n", texto);

    return 0;
}