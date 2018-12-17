#include <stdio.h>
int main(){
    int a=0,i=0,vetor[1000],b=0;
    scanf("%d",&a);
    if((a>=2)&&(a<=50)){
    for(i=0;i<1000;i++){
        vetor[i]=b;
        printf("N[%d] = %d\n",i,vetor[i]);
        b++;
        if(b==a){
        b=0;
        }
    }
    }
    return 0;
}