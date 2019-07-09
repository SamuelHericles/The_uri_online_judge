#include <stdio.h>
int main(){
    int W=0,Y=0;
    scanf("%d",&Y);
    for(W=1;W<10000;W++){
    if(W%Y==2){
        printf("%d\n",W);
    }
    }
return 0;
}