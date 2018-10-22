#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o limpa tela
void cls(void){
    #ifdef WIN32
        system("CLS");
    #else
        system("clear");
    #endif // WIN32
}

// Fun��o verifica
int inicia(char string1[], char string2[]){
    int i, valor=0; // Declaro vari�veis incrementadoras �teis no processo
    for(i=0;i<99 && string1[i]!='\0';i++){ // La�o executado enquanto i for menor que 99 e diferente de 0 (primeira string)
        if(string1[i]==string2[i]){
            valor++; // Se os caracteres nos endere�os coincidirem, soma no valor;
        }
    }
    return (valor==i); // Verifica se o n�mero de vezes em que os endere�os coincidem � igual ao n�mero de vezes que o la�o repetiu
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    char s1[99],s2[99], r; // Declaro as vari�veis para strings e a vari�vel de responsta para o fim do la�o
    setbuf(stdin, 0); // limpo buffer
    do{
    // Pego as strings
    printf("Insira uma string(m�ximo 99): ");
    gets(s1);
    printf("Insira uma segunda string(m�ximo 99): ");
    gets(s2);

    // Chamo a fun��o dentro da condicional e verifico os resultados
    if(inicia(s1,s2)==1){
        printf("A string %s est� iniciando a segunda string\n", s1);
    }else{
        printf("A string %s n�o est� iniciando a segunda string\n", s1);
    }

    // Verifico de o usu�rio que retornar
    printf("Deseja voltar(s para sim, outra para n�o)? ");
    scanf("%c%*c", &r);
    cls(); // Fun��o limpa a tela

    }while(r=='s'); // Condi��o para que o programa continue rodando (usuario responder sim)
    system("PAUSE");
}
