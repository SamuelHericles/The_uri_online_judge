#include <stdio.h>
int main(){
    int funcionario,horas_trabalhadas;
    double qt_valor,salario;
    scanf("%d%d%lf",&funcionario,&horas_trabalhadas,&qt_valor);
    printf("NUMBER = %d\n",funcionario);
    printf("SALARY = U$ %.2f\n",(horas_trabalhadas*qt_valor));
    return 0;
}
