#include<stdio.h>

int main()
{
  double e,n,a;
 int temp,temp2,d_100,d_50,d_20,d_10,d_5,d_2,d_1,d_p5,d_p25,d_p10,d_p05,d_p01,p_100,p_50,p_20,p_10,p_5,p_2,p_1,p_p5,p_p25,p_p10,p_05,p_p01,p_p05;
    scanf("%lf",&n);
    //Note
    temp=n;
    d_100 = temp/100;
    p_100 = temp% 100;

    d_50 = p_100/50;
    p_50 = p_100%50;

    d_20 = p_50/20;
    p_20 = p_50%20;

    d_10 = p_20/10;
    p_10 = p_20%10;

    d_5 = p_10/5;
    p_5 = p_10%5;

    d_2 = p_5/2;
    p_2 = p_5%2;

    //Coin

    a=n*100;
    temp2=(int)a;

    p_1 = temp2%100;


    d_p5 = p_1/50;
    p_p5 = p_1%50;

    d_p25 = p_p5/25;
    p_p25 = p_p5%25;

    d_p10 = p_p25/10;
    p_p10 = p_p25%10;

    d_p05 = p_p10/5;
    p_p05 = p_p10%5;

    d_p01 = p_p05 /1;
    p_p01 = p_p05 %1;

    //Note

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",d_100);
    printf("%d nota(s) de R$ 50.00\n",d_50);
    printf("%d nota(s) de R$ 20.00\n",d_20);
    printf("%d nota(s) de R$ 10.00\n",d_10);
    printf("%d nota(s) de R$ 5.00\n",d_5);
    printf("%d nota(s) de R$ 2.00\n",d_2);

    //Coin
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",p_2);
    printf("%d moeda(s) de R$ 0.50\n",d_p5);
    printf("%d moeda(s) de R$ 0.25\n",d_p25);
    printf("%d moeda(s) de R$ 0.10\n",d_p10);
    printf("%d moeda(s) de R$ 0.05\n",d_p05);
    printf("%d moeda(s) de R$ 0.01\n",d_p01);

}
