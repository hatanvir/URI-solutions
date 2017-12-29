#include<bits/stdc++.h>
using namespace std;

int c;
int fibo(int a)
{
    c++;
    if(a==0) return 0;
    if(a==1) return 1;
    else return fibo(a-1)+fibo(a-2);
}
int main()
{
    long long int a,b;
    for(int i=0;i<1000;i++){
        cin>>a>>b;
        if(a==0 && b==0){
            break;
        }
        else{
            c=0;
            fibo(a);
            printf("Case %d: %lld %lld %d\n",i+1,a,b,c);
        }
    }
    return 0;
}
