#include <stdio.h>
#define N 100
main(){
float vetor[N];
int i;
for(i=0;i<N;i++)
{
scanf("%f",&vetor[i]);
}
for(i=0;i<N;i++){
if(vetor[i]<=10)
{
printf("A[%d] = %.1f\n",i,vetor[i]);
}
}
}