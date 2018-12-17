#include <stdio.h>
#include <math.h>
int main(){
    int i=0;
    float soma=0;
    for(i=0;i<=19;i++){
        soma+=((float)(2*1+1)/(pow(2,i)));
        }
    printf("%.2f\n",soma);
    return 0;
}
