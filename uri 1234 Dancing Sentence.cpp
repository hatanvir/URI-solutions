#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("inn.txt","r",stdin);
    freopen("o1.txt","w",stdout);
    string s,ss;
    int i,n;
    while(getline(cin,s)){
            n=1;
    for(i=0;i<s.size();i++){
        if(s[i]==' ' || s[i]>=48 && s[i]<=57) ss+=s[i];

        else{
            if(n){
                if(s[i]>=97 && s[i]<=122){
                    ss+=s[i]-32;
                    n=0;
                }
                else {
                    ss+=s[i];
                    n=0;
                }
            }
            else{
                if(s[i]>=65 && s[i]<=90){
                    ss+=s[i]+32;
                    n=1;
                }
                else {
                    ss+=s[i];
                    n=1;
                }
            }
        }
    }
    cout<<ss<<endl;
    ss="\0";
    }
    return 0;
}
