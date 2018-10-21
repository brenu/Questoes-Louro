#include <stdio.h>
#include <stdlib.h>


// Função MDC
int mdc(int n1,int n2){
    if(n1>n2){  // Condições para se calcular o MDC usando o algoritmo de Euclides
    if(n1%n2!=0){
        int resto = n1%n2; // Procedimento
        mdc(n2,resto);
    }else{
        return n2; // Se o resto é 0, então o programa retorna o n2
    }}else{
        if(n2%n1!=0){  // Mesmo procedimento, para quando n2 é maior que n1
            int resto = n2%n1;
            mdc(n1,resto);
        }else{
            return n1;
        }
}}

//Função main
int main()
{
    int n1,n2; // Declaro variáveis dos números
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2); // Obtenho os valores das variaveis
    printf("%d", mdc(n1,n2)); // Chamo a função do MDC
    }


