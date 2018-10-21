#include <stdio.h>
#include <stdlib.h>

// Função contagem
void naturais(n){
    if(n==49){ // Caso base
        printf("%d", n);
        return; // Imprime último valor e retorna vazio
    }
    printf("%d ", n);
    naturais(n+1); // Imprime o número e chama a função para o próximo
}


// Função Principal
int main()
{
    naturais(0); // Chamada da função
}
