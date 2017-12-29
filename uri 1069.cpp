#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("I.TXT","r",stdin);
    freopen("o.txt","w",stdout);
    int t;
    string s;
    cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        int c = 0,v=0;
        string ss = s;
        reverse(ss.begin(),ss.end());
        for(int i=0;i<s.size();i++){
            for(int j=v;j<ss.size();j++){
                if(s[i] == '<' && s[j] == '>'){
                    c++;
                   v+=j;
                    //cout<<v<<endl;
                    break;
                }
                else continue;
            }
        }
        cout<<c<<endl;
        v = 0;
    }
    return 0;
}
