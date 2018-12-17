#include <stdio.h>
#include <math.h>
 int main(void){
    double AREA,RAIO,PI=3.14159;
    scanf("%lf",&RAIO);
    AREA=PI*pow(RAIO,2);
    printf("A=%.4lf\n",AREA);
    return 0;
}