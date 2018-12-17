#include <stdio.h>
int main(){
    int a=0,b=0,n=0,i=0;
    float c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=0;
        scanf("%d %d",&a,&b);
        if(b==0){printf("divisao impossivel\n");}
        if(b!=0){
        c = (float)a/b;
        printf("%.1f\n",c);
        }

    }
        return 0;
}