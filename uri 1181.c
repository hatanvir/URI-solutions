#include<stdio.h>

int main()
{
    int n;
    char s[2];
    scanf("%d",&n);
    scanf("%s",&s);

    double m[12][12];
    int i,j;
    double sum=0.0,avg;

    for(i=0;i<12;i++){//Loop for scan row

            for(j=0;j<12;j++){//Loop for scan column
                    scanf("%lf",&m[i][j]);
                if(i==n){
                    sum+=m[i][j];//Adding indicating column
                }
            }
    }
            if(s[0]=='S'){
                printf("%.1f\n",sum);
            }
    else if(s[0]=='M'){
        avg=sum/12;
        printf("%.1lf\n",avg);
    }

    return 0;


}
