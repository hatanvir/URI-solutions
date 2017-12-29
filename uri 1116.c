#include<stdio.h>

int main()
{
    int i,j,n,l;
    double d;

    scanf("%d",&n);
    for(l=0;l<n;l++){
        scanf("%d%d",&i,&j);

    if(j==0){
        printf("divisao impossivel\n");
    }
    else{
            d=(double)i/(double)j;
        printf("%.1lf\n",d);
    }
    }
    return 0;
}
