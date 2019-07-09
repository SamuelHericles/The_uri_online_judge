#include <stdio.h>
int main(){
    int N=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,H=0,I=0,J=0,L=0;
    float z=0,n=0,M=0;
    scanf("%f",&n);
    N=n;
    z=n-N;
    z=z*100;
    a=(n/100);
    b=(n-a*100)/50;
    c=(n-a*100-b*50)/20;
    d=(n-a*100-b*50-c*20)/10;
    e=(n-a*100-b*50-c*20-d*10)/5;
    f=(n-a*100-b*50-c*20-d*10-e*5)/2;
    g=(n-a*100-b*50-c*20-d*10-e*5-f*2);
    H=z/50.0;
    I=(z-H*50)/25;
    J=(z-H*50-I*25)/10;
    L=(z-H*50-I*25-J*10)/5;
    M=(z-H*50-I*25-J*10-L*5);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",H);
    printf("%d moeda(s) de R$ 0.25\n",I);
    printf("%d moeda(s) de R$ 0.10\n",J);
    printf("%d moeda(s) de R$ 0.05\n",L);
    printf("%.0f moeda(s) de R$ 0.01\n",M);
   return 0;
}