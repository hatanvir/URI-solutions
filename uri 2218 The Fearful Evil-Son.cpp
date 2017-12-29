#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int v = 2;
        int sum = 0;
        if(n == 0) cout<<1<<endl;
        else if(n == 1) cout<<2<<endl;
        else{
        for(int i=1;i<n;i++){
            sum+=v;
            v++;
        }
        cout<<sum+2<<endl;
    }
    }
    return 0;
}
