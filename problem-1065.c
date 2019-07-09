int main(){
    int a=0,n=0,W=0;
    do{
    scanf("%d",&W);
    if(W%2==0){
        a+=1;
    }
    n++;
    }while(n<5);
    printf("%d valores pares\n",a);
return 0;
}
