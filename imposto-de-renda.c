#include <stdio.h>
int main(){
	float c=0;
	scanf("%f",&c);

	if((c>=0)&&(c<=2000)){
		printf("Isento\n");
	}
	if((c>2000)&&(c<=3000)){
		printf("R$ %.2f\n",((c-2000.01)*0.08));
	}
	if((c>3000)&&(c<=4500)){
		printf("R$ %.2f\n",((80.00)+((c-3000)*0.18)));
	}
	if((c>4500)){
		printf("R$ %.2f\n",((350.00)+((c-4500)*0.28)));
	}

	return 0;
}
