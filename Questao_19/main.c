#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função verifica maiúsculas
void mais(char *str,int cont){
    if(str[cont]=='\0'){ // Caso base
        printf("A string inserida não possui letras maiúsculas\n\n");
        return; // Retorna vazio
    }

    if(str[cont]>=65 && str[cont]<=90){
        printf("A primeira letra maiúscula é %c\n\n", str[cont]);// Se estiver dentro das maiúsculas, imprime o valor
        return;
    }else{
        mais(str, cont+1); // Se não estiver nas maiúsculas, chama a função de novo
    }
}

// Função Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int cont = 0;
    char str[100000];
    printf("Insira uma string(não apenas números): ");
    fgets(str,sizeof(str)+1,stdin); // Usuário insere a string
    mais(str, cont); // Chama função
    system("PAUSE");
    return 0;
}
