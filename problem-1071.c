int main(){
    int c=0,X=0,Y=0,W=0;
    scanf("%d%d",&Y,&X);
    if(Y>=W){
    for(W=X+1;W<Y;W++){
    if(W%2!=0){
        c+=W;
    }
    }
    printf("%d\n",c);
    }
return 0;
}
