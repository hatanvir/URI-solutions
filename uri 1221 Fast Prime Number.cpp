#include<bits/stdc++.h>
using namespace std;

int prime(int);
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(prime(n) == 1) cout<<"Prime"<<endl;
        else cout<<"Not Prime"<<endl;
    }
    return 0;
}
int prime(int n)
{
    int c;
    if(n==1 || n==0) return 0;
    int s = sqrt(n);
    for(int i=2;i<=s;i++){
        if(n%i == 0){
           return 0;
           break;
        }
    }
    return 1;
}
