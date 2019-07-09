#include <stdio.h>
int main(){
    float a=0,soma=0;
    int z=0,i;
    for(i=1;i<7;i++){
        scanf("%f",&a);
        if(a>=0){
            z++;
            soma+=a;
        }
    }
    if(z==0){
        return 0;
    }
    printf("%d valores positivos\n",z);
    printf("%.1f\n",soma/z);
    return 0;
}
