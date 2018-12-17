#include <stdio.h>
int main(){
    int i=0;
    double a=0,vetor[100],c=0;
    scanf("%lf",&a);
    c=a;
    for(i=0;i<100;i++){
        vetor[i]=c;
        printf("N[%d] = %.4lf\n",i,vetor[i]);
        c/=2;
    }
    return 0;
}