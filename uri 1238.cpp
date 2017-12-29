#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("inn.txt","r",stdin);
    //freopen("o2.txt","w",stdout);
    int t;
    string s,s1,sum;
    cin>>t;
    while(t--){
        cin>>s>>s1;
        if(s.size()>s1.size()){
            for(int i=0;i<s1.size();i++){
                sum+=s[i];
                sum+=s1[i];
            }
            cout<<sum;
            for(int j=s1.size();j<s.size();j++){
                cout<<s[j];
            }
        }
        else if(s.size()<s1.size()){
            for(int i=0;i<s.size();i++){
                sum+=s[i];
                sum+=s1[i];
            }
            cout<<sum;
            for(int j=s.size();j<s1.size();j++){
                cout<<s1[j];
            }
        }
    else{
        for(int i=0;i<s.size();i++){
                sum+=s[i];
                sum+=s1[i];
            }
            cout<<sum;
    }
        cout<<endl;
        sum = "\0";
    }
    return 0;
}
