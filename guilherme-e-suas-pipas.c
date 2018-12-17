#include <stdio.h>
int main()
{
    unsigned long long int i=0;
    scanf("%llu",&i);
    if((i>=3)&&(i<=100000)){
        printf("%llu\n",(i*(i-3))/2);
        }
    return 0;
}
