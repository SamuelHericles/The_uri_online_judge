#include <stdio.h>
#define N 100
int main(){
    int c=0,b=0,a[N],i=0,maior=0;
    scanf("%d",&a[1]);
    for(i=2;i<=N;i++){
    scanf("%d",&a[i]);
    if(a[i]>maior){
        maior=(a[i-1]+a[i]+abs(a[i-1]-a[i]))/2;
        b = maior;
        c = i;
    }
    }
    printf("%d\n%d\n",b,c);
    return 0;
}
