#include <stdio.h>
int main(){
	int a=0,b=0,c=0;
	scanf("%d",&a);
	for(b=0;b<a;b++){
	scanf("%d",&c);
	if(c<0&&c%2!=0){
		printf("ODD NEGATIVE\n");
	}
	if(c<0&&c%2==0){
		printf("EVEN NEGATIVE\n");
	}
	if(c>0&&c%2!=0){
		printf("ODD POSITIVE\n");
	}
	if(c>0&&c%2==0){
		printf("EVEN POSITIVE\n");
	}
	if(c==0){
		printf("NULL\n");
	}
	}
	return 0;
}