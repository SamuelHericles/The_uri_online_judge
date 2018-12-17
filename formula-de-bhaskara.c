#include <stdio.h>
#include <math.h>
int main(){
    double delta=0,A=0,B=0,C=0;
    scanf("%lf %lf %lf",&A,&B,&C);
    delta = B*B-4*A*C;
    if((delta>0)&&(A>0)&&(B>0)){
        printf("R1 = %.5lf\n",(-B+pow(delta,0.5))/(2*A));
        printf("R2 = %.5lf\n",(-B-pow(delta,0.5))/(2*A));
    }
    else{
        printf("Impossivel calcular\n");
    }
   return 0;
}
