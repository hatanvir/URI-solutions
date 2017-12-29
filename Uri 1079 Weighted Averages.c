#include<stdio.h>
void main()
{
    int i,n;float average,w1,w2,w3;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f %f %f",&w1,&w2,&w3);
        average=((w1*2)+(w2*3)+(w3*5))/(2+3+5);
        printf("%.1f\n",average);
    }

}
