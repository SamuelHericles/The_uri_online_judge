#include <stdio.h>
#include <string.h>
char* vertebrado_aguia_pomba(char a[],char b[],char c[])
{
    if(0==strcmp(a,"vertebrado"))
    {
        if(0==strcmp(b,"ave"))
        {
            if(0==strcmp(c,"carnivoro"))
            {
                return printf("aguia\n");
            }
            if(0==strcmp(c,"onivoro"))
            {
                return printf("pomba\n");
            }
        }
        if(0==strcmp(b,"mamifero"))
        {

            if(0==strcmp(c,"onivoro"))
            {
                return printf("homem\n");
            }
            if(0==strcmp(c,"herbivoro"))
            {
                return printf("vaca\n");
            }
        }
    }
}
char* invertebrado_pulga_lagarta(char a[],char b[],char c[])
{
    if(0==strcmp(a,"invertebrado"))
    {
        if(0==strcmp(b,"inseto"))
        {
            if(0==strcmp(c,"hematofago"))
            {
                return printf("pulga\n");
            }
            if(0==strcmp(c,"herbivoro"))
            {
                return printf("lagarta\n");
            }
        }
        if(0==strcmp(b,"anelideo"))
        {
            if(0==strcmp(c,"hematofago"))
            {
                return printf("sanguessuga\n");
            }
            if(0==strcmp(c,"onivoro"))
            {
                return printf("minhoca\n");
            }
        }
    }
}
int main()
{
    char d[22],e[22],f[22];
    gets(d);
    if(((0<strcmp(d,"vertebrado"))||(0>strcmp(d,"vertebrado")))&&((0<strcmp(d,"invertebrado"))||(0>strcmp(d,"invertebrado"))))
    {return 0;}

    gets(e);
    if((((0<strcmp(e,"ave"))||(0>strcmp(e,"ave")))&&((0<strcmp(e,"mamifero"))||(0>strcmp(e,"mamifero"))))&&((((0<strcmp(e,"inseto"))||(0>strcmp(e,"inseto")))&&((0<strcmp(e,"anelideo"))||(0>strcmp(e,"anelideo"))))))
    {return 0;}

    gets(f);
    if((((0<strcmp(f,"carnivoro"))||(0>strcmp(f,"carnivoro")))&&((0<strcmp(f,"onivoro"))||(0>strcmp(f,"onivoro"))))&&(((0<strcmp(f,"onivoro"))||(0>strcmp(f,"onivoro")))&&((0<strcmp(f,"herbivoro"))||(0>strcmp(f,"herbivoro"))))&&(((0<strcmp(f,"hematofago"))||(0>strcmp(f,"hematofago")))&&((0<strcmp(f,"herbivoro"))||(0>strcmp(f,"herbivoro"))))&&(((0<strcmp(f,"hematofago"))||(0>strcmp(f,"hematofago")))&&((0<strcmp(f,"onivoro"))||(0>strcmp(f,"onivoro")))))
    {return 0;}

    if(0==strcmp(d,"vertebrado"))
    {
        vertebrado_aguia_pomba(d,e,f);
    }
    if(0==strcmp(d,"invertebrado"))
    {
        invertebrado_pulga_lagarta(d,e,f);
    }
    return 0;
}