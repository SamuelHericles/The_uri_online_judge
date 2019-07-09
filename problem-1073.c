#include <stdio.h>
int main(){
    int Y=0;
    long int W=0;
    scanf("%d",&Y);
    if((Y>5)&&(Y<2000)){
    for(W=1;W<=Y;W++){
    if(W%2==0){
    printf("%d^2 = %ld\n",W,(W*W));
    }
    }
    }
return 0;
}
