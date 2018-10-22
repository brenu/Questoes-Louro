#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o verifica mai�sculas
void mais(char *str,int cont){
    if(str[cont]=='\0'){ // Caso base
        printf("A string inserida n�o possui letras mai�sculas\n\n");
        return; // Retorna vazio
    }

    if(str[cont]>=65 && str[cont]<=90){
        printf("A primeira letra mai�scula � %c\n\n", str[cont]);// Se estiver dentro das mai�sculas, imprime o valor
        return;
    }else{
        mais(str, cont+1); // Se n�o estiver nas mai�sculas, chama a fun��o de novo
    }
}

// Fun��o Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int cont = 0;
    char str[100000];
    printf("Insira uma string(n�o apenas n�meros): ");
    fgets(str,sizeof(str)+1,stdin); // Usu�rio insere a string
    mais(str, cont); // Chama fun��o
    system("PAUSE");
    return 0;
}
