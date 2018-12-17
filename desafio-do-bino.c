#include <stdio.h>
#include <string.h>
int main(){
    int n, v, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
    scanf ("%d", &n);

    while (n > 0){
      scanf("%d", &v);
      if(v % 2 == 0){m2 += 1;}
      if(v % 3 == 0){m3 += 1;}
      if(v % 4 == 0){m4 += 1;}
      if(v % 5 == 0){m5 += 1;}
      n--;
    }

    printf ("%d Multiplo(s) de 2\n",m2);
    printf ("%d Multiplo(s) de 3\n",m3);
    printf ("%d Multiplo(s) de 4\n",m4);
    printf ("%d Multiplo(s) de 5\n",m5);
    system ("PAUSE");
    return 0;
}