#include<stdio.h>
void main()
{
    int A,B,C,D,sum1,sum2;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if(B>C && D>A && C+D>A+B && C>0 && 0<D && A%2==0){
        printf("Valores aceitos");
    }
    else{
        printf("Valores nao aceitos");
    }
    printf("\n");
}
