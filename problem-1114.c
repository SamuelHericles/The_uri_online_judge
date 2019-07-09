#include <stdio.h>
int main(){
    int senha=0;
    while(1){
    scanf("%d",&senha);
    if(senha!=2002){
        printf("Senha Invalida\n");
    }
    if(senha==2002){
    printf("Acesso Permitido\n");
    return 0;
    }
    }
    return 0;
}