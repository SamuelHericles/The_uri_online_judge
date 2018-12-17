#include <stdio.h>
int main(){
    int a=0,i=0,n[20],b=19;
    for(i=0;i<20;i++){
        scanf("%d",&n[b]);
        b--;
    }
    for(i=0;i<20;i++){
    printf("N[%d] = %d\n",i,n[i]);

    }
    return 0;
}