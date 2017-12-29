#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string l;
    cin>>t;
    while(t--){
        set<string>mp;

        cin>>n;
        for(int i=0;i<n;i++){
            cin>>l;
            mp.insert(l);
        }
        if(mp.size()==1){
            cout<<l<<endl;
        }
        else{
            cout<<"ingles"<<endl;
        }
    }
    return 0;
}
