#include <stdio.h>
int main(){
    int i,n,fat=1;
    scanf("%d",&n);
    if((n>0)&&(n<13)){
    for(i=1;i<=n;i++){
        fat*=i;
    }
        printf("%d\n",fat);
    }
    else{
        return 0;
    }
    return 0;
}#include <stdio.h>
float media(int a,int b){
    return (float)a/b;
}
int main(){
    int a=0,soma=0,n=0;
    do{
        soma+=a;
        scanf("%d",&a);
        n++;
    }while(a>=0);
    n--;
    printf("%.2f\n",media(soma,n));
    return 0;
}