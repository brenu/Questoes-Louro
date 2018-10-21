#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o copia string
void copia(char *str1,char *str2,int cont){
    if(str1[cont]=='\0'){ // Caso base
        printf("Copiado com sucesso\n");
        printf("A primeira string � %s\n", str1);
        printf("A segunda string � %s\n", str2);
        return;
    }

    str2[cont]=str1[cont]; // String2 recebe caractere da string1
    copia(str1,str2,cont+1); // Chamada recorrente da fun��o

}

// Fun��o Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    char str1[100000], str2[100000];
    printf("Digite a string a ser copiada: ");
    fgets(str1,sizeof(str1),stdin); // Usu�rio insere string para ser copiada
    copia(str1,str2,0); // Chamada da fun��o
}
