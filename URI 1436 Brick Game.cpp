#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("ii.txt","r",stdin);
    //freopen("oo.txt","w",stdout);
    int t,n;
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>n;
        int v;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        v = arr[n/2];
        cout<<"Case "<<j<<": ";
        cout<<v<<endl;
    }
    return 0;
}
