#include<stdio.h>
int main()
{
    int NUMBER,WORK_HOURS;
    float dolar,SALARY;
    scanf("%d",&NUMBER);
    scanf("%d %f" ,&WORK_HOURS ,&dolar);
    SALARY = WORK_HOURS * dolar;
    printf("NUMBER = %d\n" ,NUMBER);
    printf("SALARY = U$ %.2f",SALARY);
    printf("\n");
    return 0;
}
