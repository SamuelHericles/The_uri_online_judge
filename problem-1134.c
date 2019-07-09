#include <stdio.h>
int main(){
    int a=0,b=0,c=0,d=0;
    while(a!=4){
        scanf("%d",&a);
        if(a==1){
            b+=1;
        }
        if(a==2){
            c+=1;
        }
        if(a==3){
            d+=1;
        }
        if((a!=1)&&(a!=2)&&(a!=3)&&(a!=4)){
        scanf("%d",&a);
        if(a==1){
            b+=1;
        }
        if(a==2){
            c+=1;
        }
        if(a==3){
            d+=1;
        }
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",b);
    printf("Gasolina: %d\n",c);
    printf("Diesel: %d\n",d);
    return 0;
}