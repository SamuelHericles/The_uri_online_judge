int main(){
    int B=0,A=0,W=0;
    scanf("%d",&W);
    while(W>B){
    B = 2*A+1;
    if(W<B){return 0;}
    printf("%d\n",B);
    A++;
    }
return 0;
}
