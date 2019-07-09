#include <stdio.h>
#include <string.h>
int main(){
    char a[10],b[10],d[10];
    char b0[]="---";
    char b1[]="--*";
    char b2[]="-*-";
    char b3[]="-**";
    char b4[]="*--";
    char b5[]="*-*";
    char b6[]="**-";
    char b7[]="***";
    char c[]="caw caw";
    int sa=0,sb=0,sd=0;

while(strcmp(a,c)!=0){
gets(a);
if(0==strcmp(a,b0)){sa+=0;}
if(0==strcmp(a,b1)){sa+=1;}
if(0==strcmp(a,b2)){sa+=2;}
if(0==strcmp(a,b3)){sa+=3;}
if(0==strcmp(a,b4)){sa+=4;}
if(0==strcmp(a,b5)){sa+=5;}
if(0==strcmp(a,b6)){sa+=6;}
if(0==strcmp(a,b7)){sa+=7;}
}
printf("%d\n",sa);

while(strcmp(b,c)!=0){
gets(b);
if(0==strcmp(b,b0)){sb+=0;}
if(0==strcmp(b,b1)){sb+=1;}
if(0==strcmp(b,b2)){sb+=2;}
if(0==strcmp(b,b3)){sb+=3;}
if(0==strcmp(b,b4)){sb+=4;}
if(0==strcmp(b,b5)){sb+=5;}
if(0==strcmp(b,b6)){sb+=6;}
if(0==strcmp(b,b7)){sb+=7;}
}
printf("%d\n",sb);

while(strcmp(d,c)!=0){
gets(d);
if(0==strcmp(d,b0)){sd+=0;}
if(0==strcmp(d,b1)){sd+=1;}
if(0==strcmp(d,b2)){sd+=2;}
if(0==strcmp(d,b3)){sd+=3;}
if(0==strcmp(d,b4)){sd+=4;}
if(0==strcmp(d,b5)){sd+=5;}
if(0==strcmp(d,b6)){sd+=6;}
if(0==strcmp(d,b7)){sd+=7;}
}
printf("%d\n",sd);


    return 0;
}