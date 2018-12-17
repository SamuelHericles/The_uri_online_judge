#include <stdio.h>
int main(){
    int a=0,b=0;
while(1){
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("Decrescente\n");
    }
    if(b>a){
        printf("Crescente\n");
    }
    if(a==b){
        return 0;
    }

}

    return 0;
}