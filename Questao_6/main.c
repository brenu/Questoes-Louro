#include <stdio.h>
#include <stdlib.h>

// Fun��o de troca
void check(char *str,int comp){
    int i;
    for(i=0;i<=comp;++i){
        if(str[i]=='-'){
            str[i]='_'; // Sempre que um h�fen � detectado, o mesmo � trocado por um underline
        }
    }
    printf("%s", str); // Imprime resultado na tela
}

// Fun��o Principal
int main()
{
    int comp=0;
    printf("Escolha o comprimento do vetor de caracteres: ");
    scanf("%d", &comp); // Usu�rio informa o comprimento
    setbuf(stdin,0); // Limpar buffer
    char str[comp]; // Criado vetor com comprimento dado
    printf("Insira sua string: ");
    fgets(str,comp+1,stdin); // Usu�rio insere string
    check(str,comp); // Chamada da fun��o
}
