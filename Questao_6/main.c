#include <stdio.h>
#include <stdlib.h>

// Função de troca
void check(char *str,int comp){
    int i;
    for(i=0;i<=comp;++i){
        if(str[i]=='-'){
            str[i]='_'; // Sempre que um hífen é detectado, o mesmo é trocado por um underline
        }
    }
    printf("%s", str); // Imprime resultado na tela
}

// Função Principal
int main()
{
    int comp=0;
    printf("Escolha o comprimento do vetor de caracteres: ");
    scanf("%d", &comp); // Usuário informa o comprimento
    setbuf(stdin,0); // Limpar buffer
    char str[comp]; // Criado vetor com comprimento dado
    printf("Insira sua string: ");
    fgets(str,comp+1,stdin); // Usuário insere string
    check(str,comp); // Chamada da função
}
