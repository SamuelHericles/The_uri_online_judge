#include <stdio.h>
int main()
{
    int i=0,j=0,c=0,z=0;
    scanf("%d",&c);
    for(i=0;i<c;i++){
        scanf("%d",&z);
        if(z%2==0)
        printf("0\n");
        if(z%2!=0)
        printf("1\n");
    }

    return 0;
}