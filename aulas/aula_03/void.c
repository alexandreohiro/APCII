#include <stdio.h>

void say_hello(char *str) {
    printf("Hello, %s!\n, str");
}

int main() 
{
    char *nome = "Alexandre";
    say_hello(nome);
    say_hello(&nome[3]);

    printf("&nome: %p (c: %c), nome: %s\n", &nome[0], nome);
    printf("say_hello: %p\n", say_hello);
    
    void (*p_func)(char *) = say_hello

    // printf("p_func: %p\n", p_func);


    return 0;
}