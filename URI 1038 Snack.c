#include<stdio.h>
void main()
{
    int x,y; double pri_1,pri_2,pri_3,pri_4,pri_5;
    scanf("%d %d", &x, &y);
    if(x==1){
       pri_1 = y*4.00;
       printf("Total: R$ %.2lf\n",pri_1);
    }
    if(x==2){
        pri_2 = y*4.50;
        printf("Total: R$ %.2lf\n",pri_2);
    }
    if(x==3){
        pri_3 = y*5.00;
        printf("Total: R$ %.2lf\n",pri_3);
    }
    if(x==4){
        pri_4 = y*2.00;
        printf("Total: R$ %.2lf\n",pri_4);
    }
    if(x==5){
        pri_5 = y*1.50;
        printf("Total: R$ %.2lf\n",pri_5);
    }
}
