#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fun��o reverter print
void reverte(char *str,int pos){
    if(pos==0){ // Caso base
        printf("%c", str[pos]);
        return; // Imprime �ltimo caractere e retorna vazio
    }
    printf("%c", str[pos]); // Imprime caractere do endere�o
    reverte(str, pos-1); // Chama a fun��o para o endere�o anterior
}


//Fun��o Principal
int main()
{
    char str[999];
    printf("Digite a string: ");
    setbuf(stdin, 0);
    fgets(str,sizeof(str),stdin); // Usu�rio insere a string
    reverte(str, strlen(str)+1); // Chama fun��o
}
