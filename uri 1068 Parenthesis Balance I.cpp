#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("inn.txt","r",stdin);
    freopen("o2.txt","w",stdout);
    string s;
    while(getline(cin,s)){
        int c1=0,c2=0;
        int l =s.size();

        if(s[0] == ')' || s[l-1] == '('){
                cout<<"incorrect"<<endl;
        }
        else{
           for(int i=0;i<s.size();i++){
              if(s[i] == '('){
                c1++;
              }
              else if(s[i] == ')'){
                c2++;
              }
           }
           if(c1 == c2 || s == "\0") cout<<"correct"<<endl;
           else cout<<"incorrect"<<endl;
        }
    }
    return 0;
}
