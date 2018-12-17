#include <stdio.h>
int main(){
    int W=0,Y=0;
    scanf("%d",&Y);
    if((Y>2)&&(Y<1000)){
    for(W=1;W<=10;W++){
        printf("%d x %d = %d\n",W,Y,W*Y);
    }
    }
return 0;
}