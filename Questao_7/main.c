#include <stdio.h>
#include <stdlib.h>

// Função fatorial
int fatorial(n){
    if(n==1){ // Caso base
        return 1; // Retorna 1
    }else{
    return n*fatorial(n-1); // Retorna o número multiplicado pelo fatorial do próximo (-1)
    }
}


// Função Principal
int main()
{
    int resultado = (fatorial(1)/1)+(fatorial(2)/2)+(fatorial(3)/3)+(fatorial(4)/4)+(fatorial(5)/5);
    printf("O resultado é: %d", resultado); // Chamada da função
    return 0;
}
