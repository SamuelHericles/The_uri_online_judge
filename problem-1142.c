#include <stdio.h>
int main(){
    int i=0,a=1,b=2,c=3,n=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d %d %d PUM\n",a,b,c);
        a+=4;
        b+=4;
        c+=4;
    }
    return 0;
}