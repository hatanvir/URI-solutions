#include<stdio.h>
void main()
{
    float a;
    scanf("%f",&a);
    if(0<=a && 2000.00>=a)
        printf("Isento\n");
    else if(a>=2000.01 && 3000.00>=a)
        printf("R$ %.2f\n",(a-2000)*0.08);
    else if(a>=3000.01 && 4500.00>=a)
        printf("R$ %.2f\n",(a-3000)*0.18+(1000*0.08));
    else if(a>4500.00)
        printf("R$ %.2f\n",(a-4500)*0.28+(1000.00*0.08+1500.00*0.18));
}
