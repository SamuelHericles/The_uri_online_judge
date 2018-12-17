int main(){
    int d=0,c=0,b=0,a=0,n=0,W=0;
    do{
    scanf("%d",&W);
    if(W%2==0){
        a+=1;
    }
    if(W%2!=0){
        b+=1;
    }
    if(W>0){
        c+=1;
    }
    if(W<0){
        d+=1;
    }
    n++;
    }while(n<5);
    printf("%d valor(es) par(es)\n",a);
    printf("%d valor(es) impar(es)\n",b);
    printf("%d valor(es) positivo(s)\n",c);
    printf("%d valor(es) negativo(s)\n",d);
return 0;
}