#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int contagem(int numero, int *vetor,int posicao){
    if(posicao==0){
        if(vetor[posicao]==numero){
            return 1;
        }else{
        return 0;
        }
    }

    if(vetor[posicao]==numero){
        return 1 + contagem(numero, vetor, posicao-1);
    }else{
        return 0 + contagem(numero, vetor, posicao-1);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int comp, i, num, pos;
    printf("Escolha um comprimento para o vetor: ");
    scanf("%d", &comp);
    pos = comp-1;
    int vet[comp];
    for (i=0;i<comp;i++){
        printf("D� entrada: ");
        scanf("%d", &vet[i]);
    }
    printf("Informe qual n�mero deseja verificar as repeti��es: ");
    scanf("%d", &num);
    printf("\n\nO n�mero %d se repete %d vezes", num, contagem(num, vet, pos));
}
