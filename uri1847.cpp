#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && b<=c)cout<<":)"<<endl;
    else if(a<b && b>=c)cout<<":("<<endl;
    else if(a<b && b<c && abs(a-b)>abs(b-c))cout<<":("<<endl;
    else if(a<b && b<c && abs(a-b)>=abs(b-c))cout<<":)"<<endl;

    else if(a>b && b>c && abs(a-b)>abs(b-c))cout<<":("<<endl;
    else if(a>b && b>c && abs(a-b)>=abs(b-c))cout<<":)"<<endl;
    else if(a==b && b-c>a-b)cout<<":)"<<endl;
    else cout<<":("<<endl;

    return 0;
}
