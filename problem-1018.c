#include <stdio.h>
int main(){
    int segundos,minutos,horas;
    scanf("%d",&segundos);
    minutos=segundos/60;
    horas=minutos/60;
    printf("%d:%d:%d\n",horas,(minutos - horas*60),(segundos-minutos*60));
    return 0;
}