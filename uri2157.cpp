#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b;
    string s,stri;
    cin>>n;
    for(i=0;i<n;i++){
        stringstream st;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            st<<j;
            stri = st.str();
        }
        cout<<stri;
        reverse(stri.begin(),stri.end());
        cout<<stri<<endl;
        stri = '\0';
    }
    return 0;
}
