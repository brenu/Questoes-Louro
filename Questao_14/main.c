#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverte(char *str,int pos){
    if(pos==0){
        printf("%c", str[pos]);
        return;
    }
    printf("%c", str[pos]);
    reverte(str, pos-1);
}

int main()
{
    char str[50];
    printf("Digite a string: ");
    setbuf(stdin, 0);
    fgets(str,sizeof(str),stdin);
    reverte(str, strlen(str)+1);
}
