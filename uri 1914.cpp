#include<iostream>
using namespace std;

int main()
{
    int n,i;
    string a,b,c,d;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c>>d;

        long long int x,y;
        cin>>x>>y;
        if(b=="PAR"){
        if((x+y)%2==0)
            cout<<a<<endl;

        else
            cout<<c<<endl;
        }
        else{
            if((x+y)%2==0)

               cout<<c<<endl;

        else
            cout<<a<<endl;
        }

    }
    return 0;
}
