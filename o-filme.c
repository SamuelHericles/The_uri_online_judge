#include <stdio.h>
int main(){
    double a=0,b=0,c=0;
    scanf("%lf %lf",&a,&b);
    if((0<b)&&(0<a)&&(a<=b)&&(b<=1000.00)){
        c=(b-a)/a;
        printf("%.2lf%\n",c*100);
    }
    return 0;
}
