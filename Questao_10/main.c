#include <stdio.h>
#include <stdlib.h>

// Fun��o contagem
void naturais(n){
    if(n==49){ // Caso base
        printf("%d", n);
        return; // Imprime �ltimo valor e retorna vazio
    }
    printf("%d ", n);
    naturais(n+1); // Imprime o n�mero e chama a fun��o para o pr�ximo
}


// Fun��o Principal
int main()
{
    naturais(0); // Chamada da fun��o
}
