#include<stdio.h>
int main()
{
    int n;
    char s[2];
    scanf("%d",&n);
    scanf("%s",&s); 

    double m[12][12],sum=0.0,avg;
    int i,j;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){

            scanf("%lf",&m[i][j]);
            if(j==n){
            sum+=m[i][j];
                }

        }
    }
    if(s[0]=='S'){
        printf("%.1lf\n",sum);
    }
    else if(s[0]=='M'){
        avg=sum/12.0;
        printf("%.1lf\n",avg);
    }
    return 0;
}
