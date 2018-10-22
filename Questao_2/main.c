#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função limpa tela
void cls(void){
    #ifdef WIN32
        system("CLS");
    #else
        system("clear");
    #endif // WIN32
}

// Função verifica
int inicia(char string1[], char string2[]){
    int i, valor=0; // Declaro variáveis incrementadoras úteis no processo
    for(i=0;i<99 && string1[i]!='\0';i++){ // Laço executado enquanto i for menor que 99 e diferente de 0 (primeira string)
        if(string1[i]==string2[i]){
            valor++; // Se os caracteres nos endereços coincidirem, soma no valor;
        }
    }
    return (valor==i); // Verifica se o número de vezes em que os endereços coincidem é igual ao número de vezes que o laço repetiu
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    char s1[99],s2[99], r; // Declaro as variáveis para strings e a variável de responsta para o fim do laço
    setbuf(stdin, 0); // limpo buffer
    do{
    // Pego as strings
    printf("Insira uma string(máximo 99): ");
    gets(s1);
    printf("Insira uma segunda string(máximo 99): ");
    gets(s2);

    // Chamo a função dentro da condicional e verifico os resultados
    if(inicia(s1,s2)==1){
        printf("A string %s está iniciando a segunda string\n", s1);
    }else{
        printf("A string %s não está iniciando a segunda string\n", s1);
    }

    // Verifico de o usuário que retornar
    printf("Deseja voltar(s para sim, outra para não)? ");
    scanf("%c%*c", &r);
    cls(); // Função limpa a tela

    }while(r=='s'); // Condição para que o programa continue rodando (usuario responder sim)
    system("PAUSE");
}
