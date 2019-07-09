#include <stdio.h>
int main(){
    int i=0;
    float soma=0;
    for(i=1;i<=100;i++){
        soma+=((float)1/i);
        }
    printf("%.2f\n",soma);
    return 0;
}