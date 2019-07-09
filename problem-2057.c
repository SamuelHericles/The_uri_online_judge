#include <stdio.h>
#include <string.h>
int main(){
    int s, t, f, T;
    scanf("%d %d %d", &s, &t, &f);
    if(s == 0){
      s = 24;
    }
    T = s + f + t;
    if(T >= 24){
       T = T - 24;
    }
    printf ("%d\n", T);
    system ("PAUSE");
    return 0;
}