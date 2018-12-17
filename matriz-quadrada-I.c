#include <stdio.h>
int main(){
    int n=1;
    while(n>0){
        scanf("%d",&n);
        if(n==0)break;
        int a=0,i,j,M[n][n];
        while(a<n){
            for(i=a;i<n-a;i++){
                for(j=a;j<n-a;j++){
                    M[i][j]=a+1;
                }
            }
            a++;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j==0)printf("%3d",M[i][j]);

                else printf(" %3d",M[i][j]);
            }
            printf("\n");
            }
        printf("\n");
    }
    return 0;
}