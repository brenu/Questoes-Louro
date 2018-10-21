#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o conta repeti��o
int contagem(int numero, int *vetor,int posicao){
    if(posicao==0){ // Caso base
        if(vetor[posicao]==numero){
            return 1; // Se o conte�do for igual, retorna 1
        }else{
        return 0; // Conte�do diferente do n�mero dado
        }
    }

    if(vetor[posicao]==numero){ // Mesmo funcionamento da base, mas com recorr�ncia
        return 1 + contagem(numero, vetor, posicao-1);
    }else{
        return 0 + contagem(numero, vetor, posicao-1);
    }
}


// Fun��o Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int comp, i, num, pos;
    printf("Escolha um comprimento para o vetor: ");
    scanf("%d", &comp); // Usu�rio insere comprimento do vetor
    pos = comp-1; // Vari�vel para posi��es no vetor
    int vet[comp]; // Declaro vari�vel com comprimento dado
    for (i=0;i<comp;i++){
        printf("D� entrada: ");
        scanf("%d", &vet[i]); // Usu�rio insere os n�meros
    }
    printf("Informe qual n�mero deseja verificar as repeti��es: ");
    scanf("%d", &num); // Usu�rio insere o n�mero a ser verificado
    printf("\n\nO n�mero %d se repete %d vezes", num, contagem(num, vet, pos)); // Chamada da fun��o
}
