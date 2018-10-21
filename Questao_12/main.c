#include <stdio.h>
#include <stdlib.h>

// Fun��o conta d�gitos
int contaDigi(int val){
    if (val == 0) { // Caso base
        return 1; // Retorna 1
    }

    if(val!=0 && val/10!=0){
        return 1 + contaDigi(val/10); /*Se o n�mero � diferente de zero,
                                        e seu quociente por 10 � diferente de zero,
                                        retorna 1 + a fun��o pelo quociente*/
    }else{
        return 1; // Se uma das condi��es n�o se atende, retorna 1 imediatamente
    }
}

// Fun��o Principal
int main(){
    int val;
    scanf("%d", &val); // Usu�rio insere n�mero
    printf("%d", contaDigi(val)); // Chamada da fun��o
}
