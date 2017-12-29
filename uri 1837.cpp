#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int q,r;
    for(r=0;r<abs(b);r++){
            if((a-r)%b==0){
                q=(a-r)/b;
                break;
            }
    }
    cout<<q<<" "<<r<<endl;

    return 0;
}
