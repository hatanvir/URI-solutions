#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    string s;
    while(getline(cin,s)){
        string sum = "";
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                if((s[i]+13>90 && 103>=s[i]+13) || (122<s[i]+13)){
                    sum+=(s[i]+13)-26;
                }
                else{
                    sum+=s[i]+13;
                }
            }
            else sum+=s[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
