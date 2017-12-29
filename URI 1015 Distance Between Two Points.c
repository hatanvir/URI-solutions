#include<stdio.h>
#include<math.h>
void main()
{
    double x1,x2,y1,y2,distance;
    scanf("%lf %lf" ,&x1 ,&y1);
    scanf("%lf %lf",&x2,&y2);
    distance = sqrt ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("%.4f",distance);
    printf("\n");
}
