#include<stdio.h>
void main()
{
    int i,x,n,count_1=0,count_2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(10<=x && 20>=x){
            count_1=count_1+1;
        }
        else{
            count_2=count_2+1;
        }
    }
    printf("%d in\n",count_1);
    printf("%d out\n",count_2);
}
