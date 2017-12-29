#include<stdio.h>
int main()
{
    int a,b,c,s,co=0,c1,c2,c3;
    c1=0;
    c2=0;
    c3=0;
    while(1){
            scanf("%d%d",&a,&b);
        if(a>b){
            c1++;
        }
        if(a<b){
            c2++;
        }
        if(a==b){
            c3++;
        }
        co++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&c);
        if(c==2){
            break;
        }
    }
            printf("%d grenais\n",co);
            printf("Inter:%d\n",c1);
            printf("Gremio:%d\n",c2);
            printf("Empates:%d\n",c3);
            if(c1>c2){

            printf("Inter venceu mais\n");

            }
            else if(c1<c2){
                printf("Gremio venceu mais\n");
            }
            else{
                printf("Empates venceu mais\n");
            }

    return 0;
}
