#include<iostream>
using namespace std;

int main()
{
    int i,t1,t2,t3,sum;
    cin>>t1>>t2>>t3;
    sum=t1+t2+t3;

    if(sum==24){
        cout<<"0"<<endl;
    }
    else if(sum>24){
        cout<<sum-24<<endl;
    }
    else if(sum<0){
        cout<<sum+24<<endl;
    }
    else
        cout<<sum<<endl;

    return 0;
}
