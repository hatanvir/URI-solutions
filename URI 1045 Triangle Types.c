#include<stdio.h>
#include<math.h>
int main()
{
    double c,b,a;
    scanf("%lf %lf %lf",&a,&b,&c);
    a=(0<a);b=(0<b);c=(0<c);
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    if(pow(a,2) == pow(b,2)+pow(c,2))
        printf("TRIANGULO RETANGULO\n");
    if(pow(a,2)>pow(b,2)+pow(c,2))
        printf("TRIANGULO OBTUSANGULO\n");
    if(pow(a,2)<pow(b,2)+pow(c,2))
        printf("TRIANGULO ACUTANGULO\n");
    if((a>=b+c) == (pow(a,2)==pow(b,2)+pow(c,2)) == (pow(a,2)>pow(b,2)+pow(c,2)))
        printf("TRIANGULO EQUILATERO\n");
    if((a>=b+c) == (pow(a,2)==pow(b,2)+pow(c,2)) && (pow(a,2)>pow(b,2)+pow(c,2))!=(a>=b+c) == (pow(a,2)==pow(b,2)+pow(c,2)))
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}
