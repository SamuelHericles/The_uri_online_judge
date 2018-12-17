#include <stdio.h>
int main(){
        int s=0,i=0,a=0,b=0;
        scanf("%d %d",&a,&b);
        if(a<b){
        for(i=a;i<=b;i++){
            if(i%13!=0){
                s+=i;
            }
        }
        printf("%d\n",s);
        }
        if(a>b){
        for(i=b;i<=a;i++){
            if(i%13!=0){
                s+=i;
            }

        }
        printf("%d\n",s);
    }
    return 0;
}

