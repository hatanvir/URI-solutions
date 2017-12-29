#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        int r = pow(3*x,2)+pow(y,2);
        int b = 2*(x*x)+(5*y)*(5*y);
        int c = -100*x+pow(y,3);
        if(r>b && c<r ) cout<<"Rafael ganhou"<<endl;
        else if(b>r && c<b) cout<<"Beto ganhou"<<endl;
        else if(c>r && b<c) cout<<"Carlos ganhou"<<endl;
    }
    return 0;
}
