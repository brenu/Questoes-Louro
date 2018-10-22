#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o que conta palavras
void conta(char string[]){
    int i, contador=1;  // Vari�veis locais �teis no processo
    for(i=0;i<99;i++){
        if(string[i]!='\0' && string[i]==' ' && string[i+1]!=' '){
            contador++; // O contador � incrementado se o endere�o for diferente de 0, igual a um espa�o e
                        // O pr�ximo for diferente de um espa�o
        }
    }
    if(contador==1 && string[0]=='\0') //Se a string inicial � um zero, o contador volta para zero.
        contador = 0;
    printf("A string possui %d palavras", contador); // Imprime resultado
}

// Fun��o principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    char vet[99]; // Declaro vetor a ser usado na fun��o
    printf("Digite uma string (m�ximo 99 caracteres): ");
    gets(vet); // Obtenho a string
    conta(vet); // Chamo a fun��o que ir� contar
}
