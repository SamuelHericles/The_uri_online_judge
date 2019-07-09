#include <stdio.h>
int main()
{
    unsigned long long int i=0;
    while(scanf("%llu",&i)!=EOF){
    if((i>=1001)&&(i<=9999)){
        printf("%llu\n",i-1);
        }
        }
    return 0;
}
