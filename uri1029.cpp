#include<bits/stdc++.h>
using namespace std;

int c;

int fibo(int n)
{
    c++;
    if(n==0){
        return 0;
    }
    if(n==1)
        return 1;

    else
        return (fibo(n-2)+fibo(n-1));
}

int main()
{
    int i,n,v;
    cin>>v;
    while(v--){
        cin>>n;
        c=0;
        printf("fib(%d) = %d calls = %d\n",n,c,fibo(n));
    }
    return 0;
}
