#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int i,n,c;
    while(scanf("%d",&n)){
            if(n==0){
                break;
            }
            else{
                    c=0;
            int arr[n][n];
                for(int i=0;i<n;i++){
                    for(int j=i;j<n+i;j++ ){
                      c++;
                   }
               }
               for(int i=0;i<n;i++){
                    for(int j=i;j<n+i;j++ ){
                       int p=pow(2,j);
                       if(n==c){
                        cout<<p;
                       }
                       else if(n==1 || n==2){
                        printf("%d",p);
                       }
                       else if(n==5){
                        printf("  %d",p);
                       }
                       else{
                       printf(" ");
                       printf("%d",p);
                       }
                   }
                   printf("\n");
        }
        printf("\n");
     }
    }
    return 0;
}
