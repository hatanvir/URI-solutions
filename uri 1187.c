#include<stdio.h>

int main()
{
    char s[2];

    scanf("%s",&s);
    double m[6][6],sum=0.0,avg;

        int i,j,l=5,r=5;

        for(i=0;i<6;i++){
            for(j=0;j<6;j++){
                    scanf("%lf",&m[i][j]);
            }
        }
        for(i=6;i>=0;i--){
            for(j=5-r;j<10-l;j++){
                   sum+=m[i][j];
            }
            r--;
            l--;

        }
        if(s[0]=='S'){
                printf("%.1lf\n",sum);
        }
        else if(s[0]=='M'){
            avg=sum/30.0;
            printf("%.1lf\n",avg);
        }

        return 0;
}
