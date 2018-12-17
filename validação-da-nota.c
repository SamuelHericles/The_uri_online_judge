#include <stdio.h>
int main(){
    float a=0,b=0,i=0;

    for(i=0;i<1;i++){
    scanf("%f",&a);
    if((a<0)||(a>10)){
        printf("nota invalida\n");
        i--;
    }
    }
    for(i=0;i<1;i++){
    scanf("%f",&b);
    if((b<0)||(b>10)){
        printf("nota invalida\n");
        i--;
    }
    }
    printf("media = %.2f\n",(a+b)/2);
    return 0;
}