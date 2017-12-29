/*Salary with Bonus*/
#include<stdio.h>
void main()
{
    double main_salary,bonus,sale,TOTAL;
    char str[20];
    scanf("%s",&str);
    scanf("%lf\n",&main_salary);
    scanf("%lf",&sale);
    TOTAL = main_salary + (sale * 0.15);
    printf("TOTAL = R$ %.2f",TOTAL);
    printf("\n");
}
