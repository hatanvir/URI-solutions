#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("inn.txt","r",stdin);
    freopen("o2.txt","w",stdout);
    int t;
    string a,b,c;
    cin>>t;
    while(t--){
        int n=1;
        cin>>a>>b>>c;
        string cc = c;
        for(int i=0;i<c.size();i++){
            if(c[i] == '_'){
                if(n){
                   c[i] = a[i];
                   cc[i] = b[i];
                   n = 0;
                }
                else{
                    c[i] = a[i];
                    cc[i] = b[i];
                    n = 1;
                }
            }
        }
        cout<<c<<" "<<cc<<endl;
        cout<<a<<" "<<b<<endl;
        if(c == a || cc == b) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}
