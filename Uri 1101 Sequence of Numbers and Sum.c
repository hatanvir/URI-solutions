#include<stdio.h>
void main()
{
    int i,m,n,sum=0,j,k;
    for(i=1;i<=3;i++){
            scanf("%d %d",&m,&n);

        if(m<=0 || n<=0){
            break;
        }

        if(n>m){
            for(j=m;j<=n;j++){
                    sum=sum+j;
                printf("%d ",j);
            }
            printf("Sum=%d\n",sum);
        }
        if(n<m){
            for(k=n;k<=m;k++){
                sum=sum+k;
                printf("%d ",k);
            }
            printf("Sum=%d\n",sum);

        }
    }
}


