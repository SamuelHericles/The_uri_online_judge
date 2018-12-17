#include <stdio.h>
int main(){
    int cdg,qt;
    scanf("%d %d",&cdg,&qt);
    switch(cdg){
case 1:
        printf("Total: R$ %.2f\n",qt*4.0);
        break;
case 2:
        printf("Total: R$ %.2f\n",qt*4.5);
        break;
case 3:
        printf("Total: R$ %.2f\n",qt*5.0);
        break;
case 4:
        printf("Total: R$ %.2f\n",qt*2.0);
        break;
case 5:
        printf("Total: R$ %.2f\n",qt*1.5);
        break;
    }
   return 0;
}