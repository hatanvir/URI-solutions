#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int c = 0,v=0;
        int s1 = a.size();
        int s2 = b.size();
        int dis = s1-s2;
        for(int i=dis;i<s1;i++){
            if(a[i] == b[v]){
                c++;
            }
            v++;
        }
        if(c == s2) cout<<"encaixa"<<endl;
        else cout<<"nao encaixa"<<endl;
    }
    return 0;
}
