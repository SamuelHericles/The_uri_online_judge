#include <stdio.h>
int main(){
    int N=0;
    float i=1,a=0,b=0,c=0;
    scanf("%d",&N);
    while(i<=N){
      scanf("%f %f %f",&a,&b,&c);
        printf("%.1f\n",(a*2+b*3+c*5)/10);
    i++;
    }
return 0;
}