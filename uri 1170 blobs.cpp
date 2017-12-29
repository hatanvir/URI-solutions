#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double n;
    cin>>t;
    while(t--){
        cin>>n;
        int c = 0,j;
        while(n>1){
            n/=2;
            c++;
        }
        cout<<c<<" dias"<<endl;
    }
    return 0;
}
