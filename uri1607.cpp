#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum;
    string a,b;
    cin>>t;
    while(t--){
        sum = 0;
        cin>>a>>b;
        for(int i=0;i<a.size();i++){
            int d = b[i]-a[i];
            cout<<d<<endl;
            if(d<0){
                d+=26;
            }
            sum+=d;
        }
        cout<<sum<<endl;
    }
    return 0;
}
