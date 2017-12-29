#include<bits/stdc++.h>
using namespace std;

long long int str(string);
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    string s;
    while(getline(cin,s)){
        int c = 0;
        string sum = "";
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9') sum+=s[i];
            else if(s[i] == 'l') sum+='1';
            else if(s[i] == 'o' || s[i] == 'O') sum+='0';
            else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                c = 1;
                break;
            }
        }
        long int v = 2147483647;
        if(sum.empty() || (str(sum) > v) || c == 1) cout<<"error"<<endl;
        else cout<<str(sum)<<endl;
    }
    return 0;
}
long long int str(string s)
{
    stringstream ss(s);
    long long int n = 0;
    ss >> n;
    return n;
}
