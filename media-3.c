#include<stdio.h>
int main(){
    float n1=0,n2=0,n3=0,n4=0,md=0,mf=0,n5=0;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    md = (n1*2+n2*3+n3*4+n4*1)/10;
    if (md>=7.0){
        printf("Media: %.1f\n",md);
        printf("Aluno aprovado.\n");
        return 0;
    }
    if(md<5.0){
        printf("Media: %.1f\n",md);
        printf("Aluno reprovado.\n");
        return 0;
    }
    if((md>=5.0)&&(md<7.0)){
        printf("Media: %.1f\n",md);
        printf("Aluno em exame.\n");
        scanf("%f",&n5);
        printf("Nota do exame: %.1f\n",n5);
        mf = (md+n5)/2;
        if (mf>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",mf);
            return 0;
        }
        if(mf<5.0){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",mf);
            return 0;
        }
    }

return 0;
}