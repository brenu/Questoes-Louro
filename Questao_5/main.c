#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maiorde(int *vet,int comp){
    int i, maior = 0;
    for(i=1;i<comp;i++){
        if(vet[i]>=maior){
            maior = vet[i];
        }
    }
    printf("O maior é %d", maior);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i,comp;
    printf("Informe o comprimento do vetor: ");
    scanf("%d", &comp);
    int vet[comp];
    for(i=0;i<comp;i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }
    maiorde(vet, comp);
}
