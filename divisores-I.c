#include <stdio.h>
int main(){
    int a=0,n=0;
    scanf("%d",&a);
    if(a==0){return 0;}
    do{
        n++;

        if(a%n==0){
            printf("%d\n",n);
        }
    }while(a!=n);
    return 0;
}