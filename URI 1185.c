#include<stdio.h>

int main()
{
    char s[2];

    scanf("%s",&s);
    double m[12][12],sum=0.0,avg;

        int i,j,k,l,p=4;

        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
                    scanf("%lf",&m[i][j]);
            }
        }
        for(i=0;i<12;i++){
            for(j=0;j<11-i;j++){
                    sum+=m[i][j];
            }
        }
        if(s[0]=='S'){
                printf("%.1lf\n",sum);
        }
        else if(s[0]=='M'){
            avg=sum/66.0;
            printf("%.1lf\n",avg);
        }
        return 0;
}


