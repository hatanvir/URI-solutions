#include<bits/stdc++.h>
using namespace  std;

int main()
{
    //freopen("ii.txt","r",stdin);
    //freopen("oo.txt","w",stdout);
    int a,b;
    while(cin>>a>>b){
            long long int sum1 = 1,sum2 = 1;
            for(int i=1;i<=a;i++){
                sum1*=i;
            }
            for(int j=1;j<=b;j++){
                sum2*=j;
            }
            cout<<sum1+sum2<<endl;
    }
    return 0;
}
