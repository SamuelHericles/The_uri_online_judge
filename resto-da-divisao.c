#include <stdio.h>
int main(){
    int X,Y,I;
    scanf("%d",&X);
    scanf("%d",&Y);
    if(Y>X){
    for(I=X+1;I<Y;I++){
    if(I%5==3){
            printf("%d\n",I);
            }
    if(I%5==2){
            printf("%d\n",I);
}}}
    else{
    for(I=Y+1;I<X;I++){
    if(I%5==3){
        printf("%d\n",I);
    }
    if(I%5==2){
        printf("%d\n",I);
}}}
return 0;
}