#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[15];
    int ar[15];
    int i,c1,c2,v,m,n;
    c1=0,c2=0;
    for(i=0;i<15;i++){
        cin>>v;
        if(v%2==0){
            arr[c1]=v;
            c1++;
        }
        else{
            ar[c2]=v;
            c2++;
        }
        if(c1==5){
            m=0;
            while(m<5){
                printf("par[%d] = %d\n",m,arr[m]);
                m++;
            }
            c1=0;
        }
        if(c2==5){
            n=0;
            while(n<5){
                printf("impar[%d] = %d\n",n,ar[n]);
                n++;
            }
            c2=0;
        }
        if(i==14){
            n=0;
            while(n<c2){
                printf("impar[%d] = %d\n",n,ar[n]);
                n++;
            }
            m=0;
            while(m<c1){
                printf("par[%d] = %d\n",m,arr[m]);
                m++;
            }
        }
    }

    return 0;
}
