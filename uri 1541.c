#include<iostream>
using namespace std;

int main()
{
    int a,b,c,area;
    while(1){
        cin>>a;
        if(a==0)
            break;
        cin>>b>>c;
        area = a*b*100/c;
        cout<<sqrt(area)<<endl;

    }
}
