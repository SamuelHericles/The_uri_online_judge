#include <stdio.h>
int main(){
    int i=0,a=1,b=60;
    for(i=1;i<=13;i++){
        printf("I=%d J=%d\n",a,b);
        a+=3;
        b-=5;

    }
    return 0;
}