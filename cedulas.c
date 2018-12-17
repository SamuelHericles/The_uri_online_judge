#include <stdio.h>
int main(){
    int n=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0;
    scanf("%d",&n);
    printf("%d\n",n);
    a=(n/100);
    b=(n-a*100)/50;
    c=(n-a*100-b*50)/20;
    d=(n-a*100-b*50-c*20)/10;
    e=(n-a*100-b*50-c*20-d*10)/5;
    f=(n-a*100-b*50-c*20-d*10-e*5)/2;
    g=(n-a*100-b*50-c*20-d*10-e*5-f*2);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);
    return 0;
}
