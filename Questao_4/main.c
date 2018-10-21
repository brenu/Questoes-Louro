#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função conta repetição
int contagem(int numero, int *vetor,int posicao){
    if(posicao==0){ // Caso base
        if(vetor[posicao]==numero){
            return 1; // Se o conteúdo for igual, retorna 1
        }else{
        return 0; // Conteúdo diferente do número dado
        }
    }

    if(vetor[posicao]==numero){ // Mesmo funcionamento da base, mas com recorrência
        return 1 + contagem(numero, vetor, posicao-1);
    }else{
        return 0 + contagem(numero, vetor, posicao-1);
    }
}


// Função Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int comp, i, num, pos;
    printf("Escolha um comprimento para o vetor: ");
    scanf("%d", &comp); // Usuário insere comprimento do vetor
    pos = comp-1; // Variável para posições no vetor
    int vet[comp]; // Declaro variável com comprimento dado
    for (i=0;i<comp;i++){
        printf("Dê entrada: ");
        scanf("%d", &vet[i]); // Usuário insere os números
    }
    printf("Informe qual número deseja verificar as repetições: ");
    scanf("%d", &num); // Usuário insere o número a ser verificado
    printf("\n\nO número %d se repete %d vezes", num, contagem(num, vet, pos)); // Chamada da função
}
