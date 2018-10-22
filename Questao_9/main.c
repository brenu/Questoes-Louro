#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função anagrama
void anagrama(char *p1, char *p2, int tam1, int tam2){
    int i,j, cont = 0;
    if(tam1!=tam2){
        printf("Não são anagramas"); // Se os tamanhos forem diferentes, não são
        return;
    }else{
        int pos = tam1;
        for(i=0;i<pos;i++){
            for(j=0;j<pos;j++){
            if (p1[i]=='\0'){
                break;
            }else if(p1[i]==p2[j]){
                cont++;
                p2[j]=0; /* Se o valor de p1 for igual ao de algum endereço em p2,
                            o contador é incrementado e esse valor em p2 é zerado*/
                break;
            }
        }
        }
        if(cont==tam1){
            printf("São anagramas"); // Se o contador for igual ao tamanho, são anagramas
            return;
        }else{
            printf("\nNão são anagramas\n"); // Contador diferente, não são anagramas
            printf("%d", cont);
            return;
        }
    }
}

// Função Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    char p1[100000],p2[100000];
    printf("Insira a primeira palavra: ");
    setbuf(stdin, 0);
    fgets(p1,sizeof(p1),stdin); // Usuário insere string
    printf("Insira a segunda palavra: ");
    fgets(p2,sizeof(p2),stdin); // Usuário insere string
    anagrama(p1,p2,strlen(p1),strlen(p2)); // Chamada da função
    return 0;
}
