#include <stdio.h>
int main()
{
    float a;
    int z=0,i=0;
    for(i=1; i<7; i++)
    {
        scanf("%f",&a);
        if(a>=0)
        {
            z++;
        }

    }
    printf("%d valores positivos\n",z);
    return 0;
}