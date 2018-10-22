#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função reverter print
void reverte(char *str,int pos){
    if(pos==0){ // Caso base
        printf("%c", str[pos]);
        return; // Imprime último caractere e retorna vazio
    }
    printf("%c", str[pos]); // Imprime caractere do endereço
    reverte(str, pos-1); // Chama a função para o endereço anterior
}


//Função Principal
int main()
{
    char str[999];
    printf("Digite a string: ");
    setbuf(stdin, 0);
    fgets(str,sizeof(str),stdin); // Usuário insere a string
    reverte(str, strlen(str)+1); // Chama função
}
