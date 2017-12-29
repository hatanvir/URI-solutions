#include<stdio.h>
int main()
{
    double pi,R,A;
    pi = 3.14159;
    scanf("%lf",&R);
    A=(4/3.0)*pi*R*R*R;
    printf("VOLUME = %.3f",A);
    printf("\n");
    return 0;
}
