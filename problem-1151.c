#include <stdio.h>
int main()
{
    int i,n,termo_1=0,termo_2=1,soma=0;
    scanf("%d",&n);
        printf("%d ",termo_1);
        printf("%d",termo_2);
        for(i=2;i<n;i++)
        {
            soma=termo_1+termo_2;
            termo_1=termo_2;
            termo_2=soma;
            printf(" %d",soma);
        }
    printf("\n");
    return 0;
}
}