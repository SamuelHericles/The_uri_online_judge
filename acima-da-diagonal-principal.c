#include <stdio.h>
int main(){
    char T;
    scanf("%c",&T);
    float M[12][12];
    int i,j;
    for(i=0;i<12;i++){
      for(j=0;j<12;j++){
        scanf("%f",&M[i][j]);
      }      
    }
    float soma=0;
    for(i=0;i<12;i++){
      for(j=0;j<12;j++){
        if(j>i){
          soma+=M[i][j];
        }
      }      
    }
    if(T=='S'){
         printf ("%.1f\n", soma);
    }
    if(T=='M'){
         printf ("%.1f\n", soma/66);
    }
    system("PAUSE");
    return 0;
}