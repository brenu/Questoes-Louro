#include <stdio.h>
#include <stdlib.h>


// Fun��o soma
void soma(int *n1, int *n2){
    *n1 = *n1 + *n2; // Novo valor atribu�do a vari�vel A
    return;
}

// Fun��o Principal
int main()
{
    int a,b;
    printf("Digite um numero: ");
    scanf("%d", &a); // Usu�rio insere numero
    printf("Digite o numero a ser somado: ");
    scanf("%d", &b); // Usu�rio insere numero
    soma(&a,&b); // Chamada da fun��o
    printf("Ao somar %d, obtemos %d", b,a); // Resultado
}
