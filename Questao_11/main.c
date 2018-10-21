#include <stdio.h>
#include <stdlib.h>

// Função print
void print(int *vet,int n){
    if(n==0){ // Caso base
        printf("%d", vet[n]);
        return; // Imprime o valor na tela e retorna vazio
    }
    printf("%d ", vet[n]);
    print(vet,n-1); // Imprime o valor e chama para o próximo endereço
}

// Função Principal
int main()
{
    int vet[5]={1,2,3,4,5}; // Vetor declarado
    print(vet, 4); // Chamada da função
}
