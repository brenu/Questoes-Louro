#include <stdio.h>
#include <stdlib.h>

int fatorial(n){
    if(n==1){
        return 1;
    }else{
    return n*fatorial(n-1);
    }
}

int main()
{
    int resultado = (fatorial(1)/1)+(fatorial(2)/2)+(fatorial(3)/3)+(fatorial(4)/4)+(fatorial(5)/5);
    printf("O resultado é: %d", resultado);
    return 0;
}
