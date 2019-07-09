#include <stdio.h>
typedef struct {
int n;
int qt;
int r;
int s;
int c;
char ltr;
}exp;
int main(){
    exp A;
    A.r=0;A.c=0;A.s=0;
    int i=0;
    scanf("%d",&A.n);
    for(i=0;i<A.n;i++){
    scanf("%d  %s",&A.qt,&A.ltr);
    switch(A.ltr){
     case 'C':
        A.c+=A.qt;
        break;
     case 'S':
        A.s+=A.qt;
        break;
     case 'R':
        A.r+=A.qt;
        break;
    }
    if((A.ltr!='S')&&(A.ltr!='C')&&(A.ltr!='R')){
        i--;
    }
    }
    float pc=0,ps=0,pr=0;
    pc=((float)A.c/(A.r+A.c+A.s))*100;
    pr=((float)A.r/(A.r+A.c+A.s))*100;
    ps=((float)A.s/(A.r+A.c+A.s))*100;
    printf("Total: %d cobaias\n",A.r+A.c+A.s);
    printf("Total de coelhos: %d\n",A.c);
    printf("Total de ratos: %d\n",A.r);
    printf("Total de sapos: %d\n",A.s);
    printf("Percentual de coelhos: %.2f %\n",pc);
    printf("Percentual de ratos: %.2f %\n",pr);
    printf("Percentual de sapos: %.2f %\n",ps);
    return 0;
}