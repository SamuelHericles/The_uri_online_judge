#include <stdio.h>
int main(){
    int str=0,end=0,z=0;
    scanf("%d %d",&str,&end);
    if((str>24)||(end>24)){
        return 0;
    }
    if(str>=end){
        z=24-str;
        z=z+end;
        printf("O JOGO DUROU %d HORA(S)\n",z);
        return 0;
    }
    if((str<=end)<24){
        z=end-str;
        printf("O JOGO DUROU %d HORA(S)\n",z);
        return 0;
    }
    if(str==0&&end==0){
        z=24;
        printf("O JOGO DUROU %d HORA(S)\n",z);
        return 0;
    }
    return 0;
}