#include<stdio.h>

int main()
{
    int year,b,month,days,N;
    scanf("%d",&N);
    year = N/365;
    b = N%365;
    month = b/30;
    days = b%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)",year,month,days);
    printf("\n");
    return 0;
}

