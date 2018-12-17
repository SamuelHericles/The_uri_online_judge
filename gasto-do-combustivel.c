#include <stdio.h>
int main(){
    int hr,vl;
    scanf("%d %d",&hr,&vl);
    printf("%.3f\n",((float)(hr*vl)/12));
    return 0;
}