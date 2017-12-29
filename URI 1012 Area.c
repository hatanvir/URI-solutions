#include<stdio.h>

void main()
{
    double A,B,C,pi,triangle,circle,trapezium,square,rectangle;
    pi = 3.14159;
    scanf("%lf %lf %lf" ,&A ,&B ,&C);

    triangle = 0.5*A*C;
    circle = pi*C*C;
    trapezium = (A+B)/2*C;
    square = B*B;
    rectangle = A*B;

    printf("TRIANGULO: %.3lf\n" ,triangle);
    printf("CIRCULO: %.3lf\n" ,circle);
    printf("TRAPEZIO: %.3lf\n" ,trapezium);
    printf("QUADRADO: %.3lf\n" ,square);
    printf("RETANGULO: %.3lf" ,rectangle);

    printf("\n");
}
