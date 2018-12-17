#include <stdio.h>
int main(){
    int A=0,N=0,i=0,soma=0;
    scanf("%d %d",&A,&N);
    do{
        if(N<=0){
            scanf("%d",&N);
        }
    }while(N<=0);
    for(i=1; i<=N; i++){
        soma+=A;
        A+=1;
    }
    printf("%d\n",soma);
    return 0;
}
