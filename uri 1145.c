#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++){
            c++;
        if(c==a){
            printf("%d",i);
        }
    else{
        printf("%d ",i);
    }
    if(c==a){
            c=0;
        printf("\n");
    }
    }
}
}
