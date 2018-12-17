#include <stdio.h>
float media(int a,int b){
    return (float)a/b;
}
int main(){
    int a=0,soma=0,n=0;
    do{
        soma+=a;
        scanf("%d",&a);
        n++;
    }while(a>=0);
    n--;
    printf("%.2f\n",media(soma,n));
    return 0;
}