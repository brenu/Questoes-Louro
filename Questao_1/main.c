#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função que conta palavras
void conta(char string[]){
    int i, contador=1;  // Variáveis locais úteis no processo
    for(i=0;i<99;i++){
        if(string[i]!='\0' && string[i]==' ' && string[i+1]!=' '){
            contador++; // O contador é incrementado se o endereço for diferente de 0, igual a um espaço e
                        // O próximo for diferente de um espaço
        }
    }
    if(contador==1 && string[0]=='\0') //Se a string inicial é um zero, o contador volta para zero.
        contador = 0;
    printf("A string possui %d palavras", contador); // Imprime resultado
}

// Função principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    char vet[99]; // Declaro vetor a ser usado na função
    printf("Digite uma string (máximo 99 caracteres): ");
    gets(vet); // Obtenho a string
    conta(vet); // Chamo a função que irá contar
}
