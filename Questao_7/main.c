#include <stdio.h>
#include <stdlib.h>

// Fun��o fatorial
int fatorial(n){
    if(n==1){ // Caso base
        return 1; // Retorna 1
    }else{
    return n*fatorial(n-1); // Retorna o n�mero multiplicado pelo fatorial do pr�ximo (-1)
    }
}


// Fun��o Principal
int main()
{
    int resultado = (fatorial(1)/1)+(fatorial(2)/2)+(fatorial(3)/3)+(fatorial(4)/4)+(fatorial(5)/5);
    printf("O resultado �: %d", resultado); // Chamada da fun��o
    return 0;
}
