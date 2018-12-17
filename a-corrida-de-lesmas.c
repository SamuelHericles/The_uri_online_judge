#include <stdio.h>
#include <math.h>
int main(){
    int i=0,t=0,a=0,m1=0,c=0;
    while(scanf("%d",&t)!=EOF){
    while(i!=t){
        scanf("%d",&a);
        if(a>m1){
        m1=a;
        }
        i++;
    }
        if (m1<10){c=1;}
        if((m1>=10)&&(m1<20)){c=2;}
        if((m1>=20)){c=3;}
    m1=0;
        printf("%d\n",c);
    c=0;
    a=0;
    i=0;
    }
    return 0;
}