#include<stdio.h>
void main()
{
    int x,y,i,sum=0;
    scanf("%d %d",&x,&y);
    for(i=x-1;i>y;i--){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}
