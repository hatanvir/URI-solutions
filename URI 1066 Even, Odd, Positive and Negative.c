#include<stdio.h>
void main()
{
    int i,n,sum1=0,sum2=0,sum3=0,sum4=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0){
            sum1=sum1+1;
        }
        if(n%2!=0){
            sum2=sum2+1;
        }
        if(0<n){
            sum3=sum3+1;
        }
        if(0>n){
            sum4=sum4+1;
        }

   }        printf("%d valor(es) par(es)\n",sum1);
            printf("%d valor(es) impar(es)\n",sum2);
            printf("%d valor(es) positivo(s)\n",sum3);
            printf("%d valor(es) negativo(s)\n",sum4);
}
