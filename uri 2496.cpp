#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("I.TXT","r",stdin);
    freopen("o.txt","w",stdout);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char s[n];
        string ss = "";
        for(int i=0;i<n;i++){
                cin>>s[i];
                ss+=s[i];
        }
        string temp = ss;
        int c = 0;
        sort(ss.begin(),ss.end());
       // cout<<ss<<" "<<temp<<endl;
        for(int i=0;i<ss.size();i++){
            for(int j=i;j<temp.size();j++){
                    if(ss[i] != temp[j]){
                        c++;
                        break;
                    }
                    else break;
            }
        }
        if(c == 2) cout<<"There are the chance."<<endl;
        else cout<<"There aren't the chance."<<endl;
    }
    return 0;
}
