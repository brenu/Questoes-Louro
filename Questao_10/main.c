#include <stdio.h>
#include <stdlib.h>

void naturais(n){
    if(n==49){
        printf("%d", n);
        return;
    }
    printf("%d ", n);
    naturais(n+1);
}

int main()
{
    naturais(0);
}
