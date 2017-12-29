#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int a= s.size();
        for(int j=0;j<s.size();j++){
            for(int i=0;i<j;i++){
                cout<<" ";
            }
            for(int k=0;k<a;k++){
                cout<<s[k];
                if(k!=(a-1)){
                    cout<<" ";
                }
            }
            a--;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
