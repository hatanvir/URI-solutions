#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("inn.txt","r",stdin);
    freopen("o2.txt","w",stdout);
    string s;
    while(cin>>s){
        stack<char>st;
        for(int i=0;i<s.size();i++){
                if(s[i] == '('){
                    st.push('(');
                    st.pop();
                   }
                else if(s[i] == ')'){
                    st.push(')');
                    st.pop();
                }
        }
        if(st.empty()) cout<<"correct"<<endl;
        else cout<<"incorrect"<<endl;
    }
    return 0;
}
