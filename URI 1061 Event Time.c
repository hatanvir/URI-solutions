#include<stdio.h>
void main()
{
    int i,d1,d2,h1,h2,m1,m2,s1,s2;
    printf("Dia ");
    scanf("%d",&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    printf("Dia ");
    scanf("%d",&d2);
    scanf("%d %d %d",&h2,&m2,&s2);
    printf("%d dia(s)",d2-d1);
    printf("%d hora(s)",(24-m1)+m2);
    printf("%d minuto(s)",m2-m1);
    printf("%d segundo(s)",s2-s1);
}
