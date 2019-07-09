#include <stdio.h>
int main(){
    double A,B;
    scanf("%lf%lf",&A,&B);
    if((A<=10.0)&&(A>=0)&&(B<=10.0)&&(B>=0)){
    printf("MEDIA = %.5lf\n",((A*3.5+B*7.5)/11));
    }
    return 0;
}