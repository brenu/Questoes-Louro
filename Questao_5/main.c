#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o define maior
int maiorde(int *vet,int comp){
    int i, maior = 0;
    for(i=1;i<comp;i++){
        if(vet[i]>=maior){
            maior = vet[i]; // O maior n�mero � sempre atribu�do � vari�vel
        }
    }
    printf("O maior � %d", maior); // Imprime resultado na tela
}


// Fun��o Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int i,comp;
    printf("Informe o comprimento do vetor: ");
    scanf("%d", &comp); // Usu�rio informa comprimento
    int vet[comp]; // Vetor criado com comprimento dado
    for(i=0;i<comp;i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]); // Usu�rio insere os valores
    }
    maiorde(vet, comp); // Chamada da fun��o
}
