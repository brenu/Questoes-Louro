#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cls(void){
    #ifdef WIN32
        system("CLS");
    #else
        system("clear");
    #endif // WIN32
}

int inicia(char string1[], char string2[]){
    int i, valor=0;
    for(i=0;i<99 && string1[i]!='\0';i++){
        if(string1[i]==string2[i]){
            valor++;
        }
    }
    return (valor==i);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    char s1[99],s2[99], r;
    setbuf(stdin, 0);
    do{
    printf("Insira uma string(m�ximo 99): ");
    gets(s1);
    printf("Insira uma segunda string(m�ximo 99): ");
    gets(s2);
    if(inicia(s1,s2)==1){
        printf("A string %s est� iniciando a segunda string\n", s1);
    }else{
        printf("A string %s n�o est� iniciando a segunda string\n", s1);
    }
    printf("Deseja voltar(s para sim, outra para n�o)? ");
    scanf("%c%*c", &r);
    cls();
    }while(r=='s');
    system("PAUSE");
}
