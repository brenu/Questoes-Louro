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

// Fun��o soma
void soma(int n1, int n2){
    int resultado = n1+n2;
    printf("O resultado � %d", resultado); // Realiza opera��o e imprime resultado
}

// Fun��o subtra��o
void sub(int n1, int n2){
    int resultado = n1-n2;
    printf("O resultado � %d", resultado); // Realiza opera��o e imprime resultado
}

// Fun��o multiplica��o
void multi(int n1, int n2){
    int resultado = n1*n2;
    printf("O resultado � %d", resultado); // Realiza opera��o e imprime resultado
}

// Fun��o divis�o
void divi(int n1, int n2){
    float resultado = (float)n1/(float)n2;
    printf("O resultado � %.2f", resultado); // Realiza opera��o e imprime resultado
}

// Fun��o resto
void resto(int n1, int n2){
    int resultado = n1%n2;
    printf("O resultado � %d", resultado); // Realiza opera��o e imprime resultado
}

// Fun��o Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    char res,resf = 's'; // Vari�vel do loop
    do{ // In�cio do loop
    jailson: // Evita bugs
    cls(); // Chamada limpa tela
    printf("Soma: +\nSubtra��o: -\nMultiplica��o: *\nDivis�o: /\nResto: %%\n\nQual opera��o deseja fazer? ");
    setbuf(stdin, 0);
    scanf("%c", &res); // Usu�rio insere a opera��o desejada
    if(res=='+' || res=='-' || res=='*' || res=='/' || res=='%'){ // Condi��o evita bugs
        printf("Insira o primeiro n�mero: ");
        scanf("%d", &n1); // Usu�rio insere primeiro n�mero
        printf("Insira o segundo n�mero: ");
        scanf("%d", &n2); // Usu�rio insere segundo n�mero
        cls(); // Chamada limpa tela
        switch(res){ // Casos e chamadas
            case '+':
                soma(n1,n2); // Chama soma
                break;
            case '-':
                sub(n1,n2); // Chama subtra��o
                break;
            case '*':
                multi(n1,n2); // Chama multiplica��o
                break;
            case '/':
                divi(n1,n2); // Chama divis�o
                break;
            case '%':
                resto(n1,n2); // Chama resto
                break;

    }}else{
        goto jailson; // Evita bugs
    }
    printf("\n\n\nDeseja realizar outra opera��o?'s' para sim e qualquer outra para n�o: ");
    setbuf(stdin, 0);
    scanf("%c", &resf); // Usu�rio insere se deseja ou n�o continuar
    }while(resf=='s'); // Condi��o do loop
    cls(); // Chama limpa tela
    return 0;
}
