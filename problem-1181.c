#include <stdio.h>
int main(){
    int i=0,j=0,L=0;
    char T;
    float M[12][12],soma=0;
    scanf("%d %c",&L,&T);
    for(i=0;i<12;i++){
    for(j=0;j<12;j++){
       scanf("%f",&M[i][j]);
    }
    }
    j=0;
    for(j=0;j<12;j++){
        soma=soma+M[L][j];
    }
    if(T=='S'){
        printf("%.1f\n",soma);
    }
    if(T=='M'){
        printf("%.1f\n",soma/12);
    }
    return 0;
}