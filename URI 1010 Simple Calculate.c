#include<stdio.h>
int main()
{
    int p1_id, p1_unit, p2_id, p2_unit;
    float p1_price, p2_price, pay;

    scanf("%d %d %f",&p1_id, &p1_unit, &p1_price);
    scanf("%d %d %f",&p2_id, &p2_unit, &p2_price);

    pay=(p1_unit * p1_price) + (p2_unit * p2_price);
    printf("VALOR A PAGAR: R$ %.2f",pay);
    printf("\n");

    return 0;
    }
