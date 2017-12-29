#include<stdio.h>
void main()
{
    int i,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(x%2==0 && x>0){
            printf("EVEN POSITIVE\n");
        }
        if(x%2!=0 && x<0){
            printf("ODD NEGATIVE\n");
        }
        if(x%2==0 && x<0){
            printf("EVEN NEGATIVE\n");
        }
        if(x%2!=0 && x>0){
            printf("ODD POSITIVE\n");
        }
        if(x==0){
            printf("NULL\n");
        }
    }
}
