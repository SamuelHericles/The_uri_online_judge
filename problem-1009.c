#include <stdio.h>
int main(){
    char nome[50];
    double salario_fixo=0,montante=0;
    scanf("%s",nome);
    fflush(stdin);
    scanf("%lf",&salario_fixo);
    scanf("%lf",&montante);
    printf("TOTAL = R$ %.2lf\n",(salario_fixo+(montante*0.15)));
    return 0;
}
