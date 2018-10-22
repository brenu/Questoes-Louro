#include <stdio.h>
#include <stdlib.h>

// Função calcula menor
int menorde(int *vet, int comp){
    int i, menor=2147483640;
    for(i=0;i<comp;i++){
        if(vet[i]<=menor){
            menor = vet[i]; // O maior número é sempre atribuído à variável
        }
    }
    return menor;// Imprime resultado na tela
}

// Função imprime ordem crescente
void printCresc(int *vet, int comp){
    int i, menor = menorde(vet,comp); // Atribuição pela função menorde
    for(i=0;i<comp;i++){
        if(vet[i]==menor){
            printf("%d ", menor); // Se for o menor, o número é impresso
            vet[i] = 2147483647; // Esse endereço passa a ter um valor absurdamente grande
            printCresc(vet,comp); // Chamo a função de novo (burrice mas só consegui assim)
        }
    }
}

// Função Principal
int main()
{
int i,comp,vet[100];
printf("Insira o numero de valores desejados(maximo 100): ");
scanf("%d", &comp); // Usuario informa comprimento desejado
if(comp<=100){ // Evita bugs
for(i=0;i<comp;i++){
    printf("Insira um número: ");
    scanf("%d", &vet[i]); // Usuario insere valor
}
    printCresc(vet,comp); // Chamada da função
    printf("\n\n\n");
    system("PAUSE");
    return 0;
}else{
    printf("Precisava ser no máximo 100, tchau.\n\n"); // Evita bugs
    system("PAUSE");
    return 0;
}}
