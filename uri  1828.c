#include<stdio.h>


int str(char[10] a,char[10] b)
{
    if(a=="tesoura" && b=="papel")
        return 1;
    if(a=="papel" && b=="pedra")
        return 1;
    if(a=="pedra" && b=="lagarto")
        return 1;
    if(a=="lagarto" && b=="Spock")
        return 1;
    if(a=="Spock" && b=="tesoura")
        return 1;
    if(a=="tesoura" && b=="lagarto")
        return 1;
    if(a=="lagarto " && b=="papel")
        return 1;
    if(a=="papel" && b=="Spock")
        return 1;
    if(a=="Spock" && b=="pedra")
        return 1;
    if(a=="pedra" && b=="tesoura")
        return 1;
}
int main()
{
    int i,n;
    string x,y;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);

        if(x==y){
            printf("Caso #%d: De novo!\n",i+1);
        }
        else if(str(x,y)){
            printf("Caso #%d: Bazinga!\n",i+1);
        }
        else
            printf("Caso #%d: Raj trapaceou!\n",i+1);
    }
    return 0;
}


