#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função define maior
int maiorde(int *vet,int comp){
    int i, maior = 0;
    for(i=1;i<comp;i++){
        if(vet[i]>=maior){
            maior = vet[i]; // O maior número é sempre atribuído à variável
        }
    }
    printf("O maior é %d", maior); // Imprime resultado na tela
}


// Função Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int i,comp;
    printf("Informe o comprimento do vetor: ");
    scanf("%d", &comp); // Usuário informa comprimento
    int vet[comp]; // Vetor criado com comprimento dado
    for(i=0;i<comp;i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]); // Usuário insere os valores
    }
    maiorde(vet, comp); // Chamada da função
}
