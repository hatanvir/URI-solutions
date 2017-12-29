#include<stdio.h>
void main()
{
    float a,comission1,comission2,comission3,comission4,comission5;
    int A,B,C,D,E;
    char c = '%';
    scanf("%f",&a);
    if(a>=0 && 400.00>=a){
        A=15;
        comission1=a*0.15;
        printf("Novo salario: %.2f\n",a+comission1);
        printf("Reajuste ganho: %.2f\n",comission1);
        printf("Em percentual: %d %c\n",A,c);
    }
    if(a>=400.01 && 800.00>=a){
        B=12;
        comission2=a*0.12;
        printf("Novo salario: %.2f\n",a+comission2);
        printf("Reajuste ganho: %.2f\n",comission2);
        printf("Em percentual: %d %c\n",B,c);
    }
    if(a>=800.01 && 1200.00>=a){
        C=10;
        comission3=a*0.10;
        printf("Novo salario: %.2f\n",a+comission3);
        printf("Reajuste ganho: %.2f\n",comission3);
        printf("Em percentual: %d %c\n",C,c);
    }
    if(a>=1200.01 && 2000.00>=a){
        D=7;
        comission4=a*0.07;
        printf("Novo salario: %.2f\n",a+comission4);
        printf("Reajuste ganho: %.2f\n",comission4);
        printf("Em percentual: %d %c\n",D,c);
    }
    if(a>2000){
        E=4;
        comission5=a*0.04;
        printf("Novo salario: %.2f\n",a+comission5);
        printf("Reajuste ganho: %.2f\n",comission5);
        printf("Em percentual: %d %c\n",E,c);
    }

}
