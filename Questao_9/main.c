#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o anagrama
void anagrama(char *p1, char *p2, int tam1, int tam2){
    int i,j, cont = 0;
    if(tam1!=tam2){
        printf("N�o s�o anagramas"); // Se os tamanhos forem diferentes, n�o s�o
        return;
    }else{
        int pos = tam1;
        for(i=0;i<pos;i++){
            for(j=0;j<pos;j++){
            if (p1[i]=='\0'){
                break;
            }else if(p1[i]==p2[j]){
                cont++;
                p2[j]=0; /* Se o valor de p1 for igual ao de algum endere�o em p2,
                            o contador � incrementado e esse valor em p2 � zerado*/
                break;
            }
        }
        }
        if(cont==tam1){
            printf("S�o anagramas"); // Se o contador for igual ao tamanho, s�o anagramas
            return;
        }else{
            printf("\nN�o s�o anagramas\n"); // Contador diferente, n�o s�o anagramas
            printf("%d", cont);
            return;
        }
    }
}

// Fun��o Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    char p1[100000],p2[100000];
    printf("Insira a primeira palavra: ");
    setbuf(stdin, 0);
    fgets(p1,sizeof(p1),stdin); // Usu�rio insere string
    printf("Insira a segunda palavra: ");
    fgets(p2,sizeof(p2),stdin); // Usu�rio insere string
    anagrama(p1,p2,strlen(p1),strlen(p2)); // Chamada da fun��o
    return 0;
}
