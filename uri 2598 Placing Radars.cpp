#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b>1){
            cout<<(a/b)+1<<endl;
        }
        else{
            cout<<(a/b)+(a%b)<<endl;
        }
    }
    return 0;
}
