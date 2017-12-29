#include<stdio.h>

void main()
{
    int x,z,i,count = 0,j;
    scanf("%d",&x);

    do{
        scanf("%d",&z);
    }
    while(x>=z);
     for(i=x,j=0;j<z;i++)
        {

            count++;
        }

    printf("%d\n",count);
    }

