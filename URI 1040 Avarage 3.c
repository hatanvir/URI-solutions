#include<stdio.h>
void main()
{
    double n1,n2,n3,n4,score,Media,sum;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    scanf("%lf",&score);
    Media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    printf("Media: %.1f\n",Media);
    if(Media>=7.0)
        printf("Aluno aprovado.\n");
    if(Media<5.0)
        printf("Aluno reprovado.\n");
    if(Media>=5.0 && Media<=6.9)
        printf("Aluno em exame.\n");
    scanf("%lf",&score);
    printf("Nota do exame: %.1f\n",score);
    sum = (score+Media)/2;
    if(sum>=5.0){
    printf("Aluno aprovado.\n");
    printf("Media final:",sum);
    }
    else if(sum<=4.9){
    printf("Aluno aprovado.\n");
    printf("Media final:",sum);
    }

    printf(" %.1lf\n",sum);
}
