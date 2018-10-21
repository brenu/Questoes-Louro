#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o Conta Repeti��es
int contagem(int numero, int vetor[],int comprimento){
    int i, contador=0;
    for(i=0;i<comprimento;i++){
        if(vetor[i]==numero){
            contador++; // A cada vez que o conte�do do endere�o � igual ao n�mero, contador � incrementado
        }
    }
    return contador; // Retorna valor da vari�vel contador
}

// Fun��o Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int comp, i, num;
    printf("Escolha um comprimento para o vetor: ");
    scanf("%d", &comp); // Usuario informa comprimento
    int vet[comp]; // Vetor criado com comprimento dado
    for (i=0;i<comp;i++){
        printf("D� entrada: ");
        scanf("%d", &vet[i]); // Usu�rio d� entrada nos n�meros
    }
    printf("Informe qual n�mero deseja verificar as repeti��es: ");
    scanf("%d", &num); // Usu�rio informa n�mero a ser verificado
    printf("\n\nO n�mero %d se repete %d vezes", num, contagem(num, vet, comp)); // Chamada da fun��o
}
