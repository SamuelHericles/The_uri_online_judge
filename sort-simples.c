#include <stdio.h>
int main(){
    int a=0,b=0,c=0,m1=0,m2=0;
     scanf("%d %d %d",&a,&b,&c);
     m1=(a+b+abs(a-b))/2;
     m1=(m1+c+abs(m1-c))/2;
     m2=(a+b-abs(a-b))/2;
     if(m2>c){
        m2=(m2+c-abs(m2-c))/2;
     }
     printf("%d\n",m2);
     if((a<m1)&&(a>m2)){
     printf("%d\n",a);
     }
     if((b<m1)&&(b>m2)){
     printf("%d\n",b);
     }
     if((c<m1)&&(c>m2)){
     printf("%d\n",c);
     }
     printf("%d\n",m1);          
     printf("\n%d\n%d\n%d\n",a,b,c);
    system("PAUSE");
    return 0;
}