#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("I.TXT","r",stdin);
    freopen("o.txt","w",stdout);
    set<char>st;
    int t;
    string s;
    cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                st.insert(s[i]);
            }
        }
        if(st.size() == 26) cout<<"frase completa"<<endl;
        else if(st.size() >= (26/2) && st.size() != 26) cout<<"frase quase completa"<<endl;
        else cout<<"frase mal elaborada"<<endl;
        st.clear();
    }
    return 0;
}
