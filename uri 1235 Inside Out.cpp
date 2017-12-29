#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    string sum;
    cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        int l = s.size();
        for(int i=(l/2)-1;i>=0;i--){
            sum+=s[i];
        }
        for(int i=l-1;i>=l/2;i--){
            sum+=s[i];
        }
        cout<<sum<<endl;
        sum="\0";
    }
    return 0;
}
