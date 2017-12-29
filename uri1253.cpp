#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s,ss;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>n;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]>='A' && 'Z'>=s[i]){
                int sub = s[i]-n;
                if(sub<65){
                    s[i] = (s[i]-n)+26;
                }
                else{
                    s[i] = s[i]-n;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
