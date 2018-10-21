#include <stdio.h>
#include <stdlib.h>

// Função conta dígitos
int contaDigi(int val){
    if (val == 0) { // Caso base
        return 1; // Retorna 1
    }

    if(val!=0 && val/10!=0){
        return 1 + contaDigi(val/10); /*Se o número é diferente de zero,
                                        e seu quociente por 10 é diferente de zero,
                                        retorna 1 + a função pelo quociente*/
    }else{
        return 1; // Se uma das condições não se atende, retorna 1 imediatamente
    }
}

// Função Principal
int main(){
    int val;
    scanf("%d", &val); // Usuário insere número
    printf("%d", contaDigi(val)); // Chamada da função
}
