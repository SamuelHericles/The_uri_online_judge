#include <stdio.h>
int main(){
    float sl;
    scanf("%f",&sl);

if((sl>=0)&&(sl<=400)){
printf("Novo salario: %.2f\n",sl+sl*0.15);
printf("Reajuste ganho: %.2f\n",sl*0.15);
printf("Em percentual: 15 %\n");
return 0;

}
if((sl>=400.01)&&(sl<=800)){
printf("Novo salario: %.2f\n",sl+sl*0.12);
printf("Reajuste ganho: %.2f\n",sl*0.12);
printf("Em percentual: 12 %\n");
return 0;
}
if((sl>=800.01)&&(sl<=1200)){
printf("Novo salario: %.2f\n",sl+sl*0.10);
printf("Reajuste ganho: %.2f\n",sl*0.10);
printf("Em percentual: 10 %\n");
return 0;
}
if((sl>=1200.01)&&(sl<=2000)){
printf("Novo salario: %.2f\n",sl+sl*0.07);
printf("Reajuste ganho: %.2f\n",sl*0.07);
printf("Em percentual: 7 %\n");
return 0;
}
if((sl>=2000)){
printf("Novo salario: %.2f\n",sl+sl*0.04);
printf("Reajuste ganho: %.2f\n",sl*0.04);
printf("Em percentual: 4 %\n");
return 0;
}
return 0;
}