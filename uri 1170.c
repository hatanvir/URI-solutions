#include<stdio.h>
int main()
{
    int t;
    float n;
    scanf("%d",&t);
    while(t--){
        scanf("%f",&n);
        int c = 0;
        int i;
        for(i=0;i<100;i++){
            if(n/2 != 1){
                c=i;
                n = n/2;
            }
            else if(n/2 == 1) break;
        }
        printf("%d\n",c);
    }
    return 0;
}
