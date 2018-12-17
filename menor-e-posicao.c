#include <stdio.h>
int main(){
    int c,i,n,menor;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    menor=a[0];
    for(i=0;i<n;i++){
    if(menor>a[i]){
        menor=a[i];
        c=i;
    }
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",c);
    return 0;
}