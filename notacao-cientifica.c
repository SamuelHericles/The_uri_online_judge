#include <stdio.h>
int main(){
    double a=0;
    scanf("%le",&a);
    if(a>=0){
    printf("%+.4lE\n",a);
    }
    else{
    printf("%.4lE\n",a);
    }
    return 0;
}
