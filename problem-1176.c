#include <stdio.h>

int main() {

    unsigned long long int Fib[60],s=0,z=0,w=1;
    int T=0,c=1,v[c],b=0;
    scanf("%d",&T);

    for(b=0; b<=60; b++) {
        Fib[b]=z;
        s=z+w;
        z=w;
        w=s;
    }
    while(c<=T) {
        scanf("%d",&b);
        v[c]=b;
        printf("Fib(%d) = %lld\n",v[c],Fib[v[c]]);
        c++;
    }
    return 0;
}