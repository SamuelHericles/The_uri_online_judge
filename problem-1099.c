#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,j=0,i=0,z=0;
    scanf("%d",&a);
    while(z!=a)
    {
        scanf("%d %d",&b,&j);
    if(b>=j)
        {
            for(i=j+1; i<b; i++)
            {
                if(i%2!=0)
                {
                    c+=i;
                }
            }
        }
        if(j>b)
        {
            for(i=b+1; i<j; i++)
            {
                if(i%2!=0)
                {
                    c+=i;
                }
            }
        }
        printf("%d\n",c);
        z++;
        c=0;
    }
    return 0;
}