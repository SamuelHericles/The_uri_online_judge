#include <stdio.h>
int main(){
    int a=0,b=0,i=0,m1=0,soma=0;
while(1){
    scanf("%d %d",&a,&b);
    soma =0;
    if((a>0)&&(b>0)){
    if(a>=b){
        m1=a;
    for(i=b;i<=m1;i++){
        printf("%d ",i);
        soma+=i;
    }
    printf("Sum=%d\n",soma);
    }

    if(a<=b){
        m1=b;
    for(i=a;i<=m1;i++){
        printf("%d ",i);
        soma+=i;
        }
    printf("Sum=%d\n",soma);
    }
    }
    if((a<=0)||(b<=0)){return 0;}
    }
    return 0;
}