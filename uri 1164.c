#include<stdio.h>
void main()
{
    int i,n,m,count=0,d,j;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);

          d = m/2;


        for(j=1 ; j<=d ; j++)
        {
            if(m%j==0)
            {
                count+=j;
            }
        }
        if(count==m){
            printf("%d eh perfeito\n",m);
        }
        else{
            printf("%d nao eh perfeito\n",m);
        }
    }
}
