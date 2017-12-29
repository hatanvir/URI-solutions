#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c,R1,R2,x;
    scanf("%lf %lf %lf", &a, &b, &c);
    x = b*b-4*a*c;
    R1 = (-b+sqrt(x))/(2*a);
    R2 = (-b-sqrt(x))/(2*a);
   if(x>0 && a!=0){
    printf("R1 = %.5lf\nR2 = %.5lf" ,R1 ,R2);
   }
   else{
    printf("Impossivel calcular");
   }
   printf("\n");
}
