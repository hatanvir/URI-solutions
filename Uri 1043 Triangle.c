#include<stdio.h>
void main()
{
    float a,b,c,A,P;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        P=a+b+c;
        printf("Perimetro = %.1f\n",P);
    }
    else{
        A=.5*(a+b)*c;
        printf("Area = %.1f\n",A);
    }
}
