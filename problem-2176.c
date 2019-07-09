#include <stdio.h>
#include <time.h>
int main() {
    int i=0,z=0,b=0;
    char a[102];
    __fpurge(stdin);
     fflush(stdin);
    for(i=0;i<=101;i++){
        a[i]='2';
    }
    gets(a);
    for(i=0;i<=101;i++){
    if(a[i]=='1'){
        z++;
    }
    if(a[i]=='0'){
        b++;
    }
    }
    if((b==0)&&(z==1)&&(a[0]=='1')){printf("%s1\n",a);return 0;}
    if((b==0)&&(z==0)){return 0;}
    if(z%2==0){
        printf("%s0\n",a);
    }
    if(z%2!=0){
        printf("%s1\n",a);
    }
    return 0;
}