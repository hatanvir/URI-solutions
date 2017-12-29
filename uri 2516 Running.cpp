#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    double a,b,c;
    while(cin>>a>>b>>c){
            if(b<c || ((a*b)-(a*c))==0) cout<<"impossivel"<<endl;
    else{
        printf("%.2lf\n",a/(b-c));
    }
    }
    return 0;
}
