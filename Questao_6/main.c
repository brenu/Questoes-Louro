#include <stdio.h>
#include <stdlib.h>

void check(char *str,int comp){
    int i;
    for(i=0;i<=comp;++i){
        if(str[i]=='-'){
            str[i]='_';
        }
    }
    printf("%s", str);
}


int main()
{
    int comp=0;
    printf("Escolha o comprimento do vetor de caracteres: ");
    scanf("%d", &comp);
    setbuf(stdin,0);
    char str[comp];
    printf("Insira sua string: ");
    fgets(str,comp+1,stdin);
    check(str,comp);
}
