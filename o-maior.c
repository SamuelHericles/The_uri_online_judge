#include <stdio.h>
int main(){
    int a=0,b=0,c=0,maiorAB=0;
    scanf("%d%d%d",&a,&b,&c);
    maiorAB=(a+b+abs(a-b))/2;
    maiorAB=(maiorAB+c+abs(maiorAB-c))/2;
    printf("%d eh o maior\n",(maiorAB));
    return 0;
}