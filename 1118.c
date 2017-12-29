#include<stdio.h>

int main()
{
    double sum=0.0,a,b,s2;
    int x,count=0,i;
    while(scanf("%lf",&a)!=EOF){

        if(0<=a && 10>=a){
                count++;
        }
        if(count==2){
            sum+=a;
            s2=sum/2;
        }
        printf("media = %.2lf\n",s2);

        if(!(0<=a && 10>=a)){
            printf("nota invalida\n");
        }
        if(count==2){


        scanf("%d",&x);
        }
        if(x==2){
            break;
        }
        if(x<1 ||  x>2){
        printf("novo calculo (1-sim 2-nao)\n");
        continue;
        }
    }
    return 0;
}
