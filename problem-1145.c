#include <stdio.h>
int main(){
    int X=0,Y=0,i=0,j=0;
    scanf("%d %d",&X,&Y);
    if((X>1)&&(X<20)&&(X<Y)&&(Y<100000)){
    while(i!=Y){
        while(j<X){
        i++;
        if(j==(X-1)){
        printf("%d",i);
        }
        if(j!=(X-1)){
        printf("%d ",i);
        }
        if(i==Y){
        printf("\n");
        return 0;}
        j++;
    }
        printf("\n");
        j=0;
    }
    }
    return 0;
}
