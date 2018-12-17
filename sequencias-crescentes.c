#include <stdio.h>
int main(){
    int a=1,b=1,c=1,d=1;
    int i=0;
    while(1){
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    if(i==1){printf("%d",i);}
    if(i>1){printf("% d",i);}
    }
    if(a==0){
    return 0;
    }
    printf("\n");
    }
    return 0;
}