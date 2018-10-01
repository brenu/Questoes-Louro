#include <stdio.h>
#include <stdlib.h>

void print(int *vet,int n){
    if(n==0){
        printf("%d", vet[n]);
        return;
    }
    printf("%d ", vet[n]);
    print(vet,n-1);
}

int main()
{
    int vet[5]={1,2,3,4,5};
    print(vet, 4);
}
