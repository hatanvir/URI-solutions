#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    string s,sum;
    for(int i=0;i<t;i++){
        cin>>s;
        int l=s.length();
        if(l==3 && s[0]=='O' && s[1]=='B'){
            cout<<"OBI";
        }
        else if(l==3 && s[0]=='U' && s[1]=='R'){
            cout<<"URI";
        }
        else if(l!=3 && !(s[0]=='O' && s[1]=='B') || !(s[0]=='U' && s[1]=='R')){
            cout<<s;
        }

        if(i!=(t-1)){
            cout<<" ";
        }
    }
    cout<<endl;

    return 0;
}
