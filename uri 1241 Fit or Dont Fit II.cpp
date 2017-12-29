#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("inn.txt","r",stdin);
    int n;
    string a,b;
    cin>>n;
    while(n--){
        string s;
        int c=0,v=0;
        cin>>a>>b;
        int l1 = a.size();
        int l2 = b.size();
        int dif = l1-l2;
        for(int i=dif;i<l1;i++){
            if(a[i]==b[v]){
                c++;
            }
            v++;
        }
        if(c == l2){
            cout<<"encaixa"<<endl;
        }
        else cout<<"nao encaixa"<<endl;
    }
    return 0;
}
