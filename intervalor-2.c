#include <stdio.h>
int main(){
    int a=0,n=0,i=0,b=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if((a>=10)&&(a<=20)){
            c+=1;
        }
        else{
            b+=1;
        }
    }
printf("%d in\n",c);
printf("%d out\n",b);
    return 0;
}
