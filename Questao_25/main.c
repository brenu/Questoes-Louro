#include <stdio.h>
#include <stdlib.h>

// Fun��o calcula menor
int menorde(int *vet, int comp){
    int i, menor=2147483640;
    for(i=0;i<comp;i++){
        if(vet[i]<=menor){
            menor = vet[i]; // O maior n�mero � sempre atribu�do � vari�vel
        }
    }
    return menor;// Imprime resultado na tela
}

// Fun��o imprime ordem crescente
void printCresc(int *vet, int comp){
    int i, menor = menorde(vet,comp); // Atribui��o pela fun��o menorde
    for(i=0;i<comp;i++){
        if(vet[i]==menor){
            printf("%d ", menor); // Se for o menor, o n�mero � impresso
            vet[i] = 2147483647; // Esse endere�o passa a ter um valor absurdamente grande
            printCresc(vet,comp); // Chamo a fun��o de novo (burrice mas s� consegui assim)
        }
    }
}

// Fun��o Principal
int main()
{
int i,comp,vet[100];
printf("Insira o numero de valores desejados(maximo 100): ");
scanf("%d", &comp); // Usuario informa comprimento desejado
if(comp<=100){ // Evita bugs
for(i=0;i<comp;i++){
    printf("Insira um n�mero: ");
    scanf("%d", &vet[i]); // Usuario insere valor
}
    printCresc(vet,comp); // Chamada da fun��o
    printf("\n\n\n");
    system("PAUSE");
    return 0;
}else{
    printf("Precisava ser no m�ximo 100, tchau.\n\n"); // Evita bugs
    system("PAUSE");
    return 0;
}}
