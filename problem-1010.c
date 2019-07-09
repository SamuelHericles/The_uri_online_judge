#include <stdio.h>
int main(){
    int p1=0,p2=0,np1=0,np2=0;
    double vup1=0,vup2=0;
    scanf("%d %d %lf",&p1,&np1,&vup1);
    scanf("%d %d %lf",&p2,&np2,&vup2);
    printf("VALOR A PAGAR: R$ %.2lf\n",(np1*vup1)+(np2*vup2));
    return 0;
}
