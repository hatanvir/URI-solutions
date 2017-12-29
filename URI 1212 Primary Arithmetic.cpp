#include<bits/stdc++.h>
using namespace std;
int stringst(long int);
int main()
{
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    long int a,b;
    while(cin>>a>>b){
        long int n,n2,sm,c,v;
        if(a == 0 && b == 0) break;
        else{
            sm = 0,v = 0,c = 0;
            while(1){
                    n = a%10;
                    a = a/10;
                    n2 = b%10;
                    b = b/10;
                    if((n+n2+v)>=10){
                        c++;
                        v=1;
                    }
                    else v=0;
                    if(a == 0 && b == 0) break;
        }
        if(c > 1) cout<<c<<" carry operations."<<endl;
        else if(c == 1) cout<<c<<" carry operation."<<endl;
        else cout<<"No carry operation."<<endl;
    }
    }
    return 0;
}
