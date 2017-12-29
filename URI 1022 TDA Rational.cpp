#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    int t;
    int n1,d1,n2,d2;
    char a,b,c;
    cin>>t;
    while(t--){
            cin>>n1>>d1>>b>>n2>>d2;

            if(b == '+'){
                cout<<(n1*d2 + n2*d1)<<"/"<<(d1*d2)<<" = "<<(n1*d2 + n2*d1)/(n1*d1)<<"/"<<(d1*d2)/(n1*d1)<<endl;
            }
            else if(b == '-'){
                cout<<(n1*d2 - n2*d1)<<"/"<<(d1*d2)<<" = "<<(n1*d2 - n2*d1)/(n1*d1)<<"/"<<(d1*d2)/(n1*d1)<<endl;
            }
            else if(b == '*'){
                cout<< (n1*n2)<<"/"<<(d1*d2)<<" = "<<(n1*n2)/(n1*d1)<<"/"<<(d1*d2)/(n1*d1)<<endl;
            }
            else if(b == '/'){
                cout<<(n1*d2)<<"/"<<(n2*d1)<<" = "<<(n1*d2)/(n1*d1)<<"/"<<(n2*d1)/(n1*d1)<<endl;
            }
    }
    return 0;
}
