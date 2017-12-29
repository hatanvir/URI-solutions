#include<stdio.h>
void main()
{
    double hour,km,liters;
    scanf("%lf",&hour);
    scanf("%lf",&km);
    liters = ((hour * km)/12);

    printf("%.3f",liters);
    printf("\n");
}
