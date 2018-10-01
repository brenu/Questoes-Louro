#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void conta(char string[]){
    int i, contador=1;
    for(i=0;i<99;i++){
        if(string[i]!='\0' && string[i]==' ' && string[i+1]!=' '){
            contador++;
        }
    }
    if(contador==1 && string[0]=='\0')
        contador = 0;
    printf("A string possui %d palavras", contador);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    char vet[99];
    printf("Digite uma string (máximo 99 caracteres): ");
    gets(vet);
    conta(vet);
}
