#include<iostream>
using namespace std;

int main()
{
    int i,x,z,c=0;
    cin>>x;
    do{
        cin>>z;
    }
    while(x>=z);

    int b,sum;
    for(i=x,sum=0;sum<z;){

        sum+=i;
        c++;

        i++;
    }
    cout<<c<<endl;

  return 0;
}

