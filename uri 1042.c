#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a>b && c>b && a>c){
        printf("%d\n%d\n%d\n",a,c,b);
    }
    if(b>a && b>c && c>a){
        printf("%d\n%d\n%d\n",b,c,a);
    }
    if(c>a && c>b && b>a){
        printf("%d\n%d\n%d\n",c,b,a);
    }
}
