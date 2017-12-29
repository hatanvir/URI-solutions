#include<stdio.h>
void main()
{
    int i,sum=0;float sum2=0,n,average;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(0<n){
            sum=sum+1;
            sum2=sum2+n;
        }
    }
    average=sum2/sum;
    printf("%d valores positivos\n",sum);
    printf("%.1f\n",average);
}
