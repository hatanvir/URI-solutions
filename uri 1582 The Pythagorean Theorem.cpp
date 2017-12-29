#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    int a,b,c;
    while(cin>>a>>b>>c){

    int x = a*a;
    int y = b*b;
    int z = c*c;

    if((x == y+z || y == x+z || z == x+y) and __gcd(__gcd(a,c),c) == 1)
        cout<<"tripla pitagorica primitiva"<<endl;

    else if((x == y+z || y == x+z || z == x+y) and __gcd(__gcd(a,c),c) != 1)
        cout<<"tripla pitagorica"<<endl;

    else cout<<"tripla"<<endl;
}
    return 0;
}
