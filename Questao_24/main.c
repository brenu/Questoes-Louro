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

// Função soma
void soma(int n1, int n2){
    int resultado = n1+n2;
    printf("O resultado é %d", resultado); // Realiza operação e imprime resultado
}

// Função subtração
void sub(int n1, int n2){
    int resultado = n1-n2;
    printf("O resultado é %d", resultado); // Realiza operação e imprime resultado
}

// Função multiplicação
void multi(int n1, int n2){
    int resultado = n1*n2;
    printf("O resultado é %d", resultado); // Realiza operação e imprime resultado
}

// Função divisão
void divi(int n1, int n2){
    float resultado = (float)n1/(float)n2;
    printf("O resultado é %.2f", resultado); // Realiza operação e imprime resultado
}

// Função resto
void resto(int n1, int n2){
    int resultado = n1%n2;
    printf("O resultado é %d", resultado); // Realiza operação e imprime resultado
}

// Função Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    char res,resf = 's'; // Variável do loop
    do{ // Início do loop
    jailson: // Evita bugs
    cls(); // Chamada limpa tela
    printf("Soma: +\nSubtração: -\nMultiplicação: *\nDivisão: /\nResto: %%\n\nQual operação deseja fazer? ");
    setbuf(stdin, 0);
    scanf("%c", &res); // Usuário insere a operação desejada
    if(res=='+' || res=='-' || res=='*' || res=='/' || res=='%'){ // Condição evita bugs
        printf("Insira o primeiro número: ");
        scanf("%d", &n1); // Usuário insere primeiro número
        printf("Insira o segundo número: ");
        scanf("%d", &n2); // Usuário insere segundo número
        cls(); // Chamada limpa tela
        switch(res){ // Casos e chamadas
            case '+':
                soma(n1,n2); // Chama soma
                break;
            case '-':
                sub(n1,n2); // Chama subtração
                break;
            case '*':
                multi(n1,n2); // Chama multiplicação
                break;
            case '/':
                divi(n1,n2); // Chama divisão
                break;
            case '%':
                resto(n1,n2); // Chama resto
                break;

    }}else{
        goto jailson; // Evita bugs
    }
    printf("\n\n\nDeseja realizar outra operação?'s' para sim e qualquer outra para não: ");
    setbuf(stdin, 0);
    scanf("%c", &resf); // Usuário insere se deseja ou não continuar
    }while(resf=='s'); // Condição do loop
    cls(); // Chama limpa tela
    return 0;
}
