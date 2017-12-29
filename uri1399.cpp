#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,m,u;
    int L,R,V,P;
    int i,c,k;
    cin>>n>>m>>u;
    int arr[n];
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    c=0;
    for(int j=0;j<m;j++){
            cin>>L>>R>>V>>P;
    }
        for(int j=L;j<V;j++){
            c++;
        }
       k=((u*c)/(R-L+1));
       arr[P]=k;

    for(int j=1;j<=n;j++){
        cout<<arr[j]<<endl;
    }
    cout<<endl;

    return 0;
}
