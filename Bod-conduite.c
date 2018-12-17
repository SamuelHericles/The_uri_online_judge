#include <stdio.h>
int main(){
    int i=0,t=0,r1=0,r2=0;
    scanf("%d",&t);
    while(i!=t){
        scanf("%d %d",&r1,&r2);
        printf("%d\n",r1+r2);
        i++;
    }
    return 0;
}
