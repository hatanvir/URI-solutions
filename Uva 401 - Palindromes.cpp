#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ii.txt","r",stdin);
    int i;
    char c[1001];
    string s;
    memset(c,NULL,sizeof(c));

    c['A'] = 'A';
    c['E'] = '3';
    c['H'] = 'H';
    c['I'] = 'I';
    c['J'] = 'L';
    c['L'] = 'J';
    c['M'] = 'M';
    c['O'] = 'O';
    c['S'] = '2';
    c['T'] = 'T';
    c['U'] = 'U';
    c['V'] = 'V';
    c['W'] = 'W';
    c['X'] = 'X';
    c['Y'] = 'Y';
    c['Z'] = '5';
    c['1'] = '1';
    c['2'] = 'S';
    c['3'] = 'E';
    c['5'] = 'Z';
    c['8'] = '8';
    while(cin>>s){
         string a,b;
         string ss = s;
         reverse(ss.begin(),ss.end());
         for(i=0;i<s.size();i++){
            a+=s[i];
            b+=c[s[i]];
            cout<<b<<endl;
         }
         reverse(b.begin(),b.end());
         cout<<ss<<" "<<s<<" "<<b<<" "<<a<<endl;
         if(ss == s and a == b){
            cout<<s<<" -- is a mirrored palindrome."<<endl;
         }
         else if(ss != s && a == b){
            cout<<s<<" -- is a mirrored string."<<endl;
         }
         else if((ss == s) && (a != b)){
            cout<<s<<" -- is a regular palindrome."<<endl;
         }
         else if((ss != s) && (a != b)){
            cout<<s<<" -- is not a palindrome."<<endl;
         }
         cout<<endl;
         a = "\0";
         b = "\0";

    }
    return 0;
}
