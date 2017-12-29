#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("inn.txt","r",stdin);
    freopen("o1.txt","w",stdout);
    int t;
            vector<string>vc;
    string s;
    while(cin>>t){
            for(int i=0;i<t;i++){
                cin>>s;
                vc.push_back(s);
            }
            sort(vc.begin(),vc.end());

            vector<string>:: iterator it = vc.begin();
            for(;it!=vc.end();it++){
                cout<<*it<<endl;
            }
    }
    return 0;
}
