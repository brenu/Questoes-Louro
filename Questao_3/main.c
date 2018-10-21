#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função Conta Repetições
int contagem(int numero, int vetor[],int comprimento){
    int i, contador=0;
    for(i=0;i<comprimento;i++){
        if(vetor[i]==numero){
            contador++; // A cada vez que o conteúdo do endereço é igual ao número, contador é incrementado
        }
    }
    return contador; // Retorna valor da variável contador
}

// Função Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int comp, i, num;
    printf("Escolha um comprimento para o vetor: ");
    scanf("%d", &comp); // Usuario informa comprimento
    int vet[comp]; // Vetor criado com comprimento dado
    for (i=0;i<comp;i++){
        printf("Dê entrada: ");
        scanf("%d", &vet[i]); // Usuário dá entrada nos números
    }
    printf("Informe qual número deseja verificar as repetições: ");
    scanf("%d", &num); // Usuário informa número a ser verificado
    printf("\n\nO número %d se repete %d vezes", num, contagem(num, vet, comp)); // Chamada da função
}
