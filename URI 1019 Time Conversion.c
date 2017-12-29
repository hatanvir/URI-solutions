#include<stdio.h>
int main()
{
    int hour,b,minuit,sec,N;
    scanf("%d",&N);
    hour = N/3600;
    b = N%3600;
    minuit = b/60;
    sec = b%60;
    printf("%d:%d:%d",hour,minuit,sec);
    printf("\n");
    return 0;
}
