#include <stdio.h>
#include <string.h>

void substituirCaractere(char str[], char busca, char substituto) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == busca)
            str[i] = substituto;
    }
}

int main() {
    char texto[] = "banana";
    substituirCaractere(texto, 'a', 'o');
    printf("%s\n", texto); // bonono
    return 0;
}
