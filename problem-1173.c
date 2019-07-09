#include <stdio.h>
#define N 10
int main(){
    int i=0,a[N];
        scanf("%d",&a[0]);
    if(a[0]<=50){
        printf("N[0] = %d\n",a[0]);
    for(i=1;i<N;i++){
        a[i]=2*a[i-1];
        printf("N[%d] = %d\n",i,a[i]);
    }
    }
    return 0;
}