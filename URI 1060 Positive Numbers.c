#include<stdio.h>
void main()
{
    float n;int i,sum=0;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(0<n){
           sum=sum+1;
        }

    }
    printf("%d valores positivos\n",sum);
}
