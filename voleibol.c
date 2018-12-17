#include <stdio.h>
int main(){
    char c[10];
    int i=0,a=0,b=0,z=0,d=0,e=0,f=0,g=0,n=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
    float div1=0,div2=0,div3=0;
    scanf("%d",&n);
    if((n>=0)&&(n<=100)){
    for(i=0;i<n;i++){
        scanf("%s",c);
        scanf("%d %d %d",&a,&b,&z);
        if((a>=0)&&(b>=0)&&(z>=0)&&(a<=10000)&&(b<=10000)&&(z<=10000)){
        scanf("%d %d %d",&d,&e,&f);
        if((d>=0)&&(e>=0)&&(f>=0)&&(a>=d)&&(b>=e)&&(z>=f)){
        s1+=a;
        s2+=b;
        s3+=z;
        s4+=d;
        s5+=e;
        s6+=f;
        }
        }
    }
    if(n!=0){
    div1= (float)s4/s1;
    div2= (float)s5/s2;
    div3= (float)s6/s3;
    printf("Pontos de Saque: %.2f %%.\n",div1*100);
    printf("Pontos de Bloqueio: %.2f %%.\n",div2*100);
    printf("Pontos de Ataque: %.2f %%.\n",div3*100);
    }
    if(n==0){
    printf("Pontos de Saque: 0.00 %%.\n");
    printf("Pontos de Bloqueio: 0.00 %%.\n");
    printf("Pontos de Ataque: 0.00 %%.\n");
    }
    }

    return 0;
}