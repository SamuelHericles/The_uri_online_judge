#include <stdio.h>
int main(){
    char T;
    scanf("%c",&T);
    double M[12][12];
    int i,j;
    for(i=0;i<12;i++){
      for(j=0;j<12;j++){
        scanf("%lf",&M[i][j]);
      }
    }
    double soma=0;
    for(i=0;i<12;i++){
      for(j=0;j<12;j++){
        if((i>j)&&((i+j)>=12)){
          soma+=M[i][j];
        }
      }
    }
    if(T=='S'){
         printf("%.1lf\n",soma);
    }
    if(T=='M'){
         printf("%.1lf\n",soma/30);
    }
    system("PAUSE");
    return 0;
}