#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int contagem(int numero, int vetor[],int comprimento){
    int i, contador=0;
    for(i=0;i<comprimento;i++){
        if(vetor[i]==numero){
            contador++;
        }
    }
    return contador;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int comp, i, num;
    printf("Escolha um comprimento para o vetor: ");
    scanf("%d", &comp);
    int vet[comp];
    for (i=0;i<comp;i++){
        printf("D� entrada: ");
        scanf("%d", &vet[i]);
    }
    printf("Informe qual n�mero deseja verificar as repeti��es: ");
    scanf("%d", &num);
    printf("\n\nO n�mero %d se repete %d vezes", num, contagem(num, vet, comp));
}
