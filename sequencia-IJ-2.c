#include <stdio.h>
int main(){
    int i=0,a=1,b=7;
    for(i=1;i<=15;i++){
        printf("I=%d J=%d\n",a,b);
        b--;
        if(i%3==0){
        a+=2;
        b=7;
        }
    }
    return 0;
}