#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,area ,s;
    while(1){
        cin>>a;
        if(a==0)
            break;
        cin>>b>>c;
        area = a*b*100/c;
        s=sqrt(area);
        cout<<s<<endl;

    }
    return 0;
}
