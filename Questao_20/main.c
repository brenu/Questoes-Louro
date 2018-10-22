#include <stdio.h>
#include <stdlib.h>


// Função soma
void soma(int *n1, int *n2){
    *n1 = *n1 + *n2; // Novo valor atribuído a variável A
    return;
}

// Função Principal
int main()
{
    int a,b;
    printf("Digite um numero: ");
    scanf("%d", &a); // Usuário insere numero
    printf("Digite o numero a ser somado: ");
    scanf("%d", &b); // Usuário insere numero
    soma(&a,&b); // Chamada da função
    printf("Ao somar %d, obtemos %d", b,a); // Resultado
}
