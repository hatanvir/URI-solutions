#include<bits/stdc++.h>
using namespace std;

int str(int);
int fac(int);
int main()
{
    int n;
    while(cin>>n){
            if(n == 0) break;
            else{
                int sm = 0;
                int s = str(n);
                    for(int i=1;i<=s;i++){
                        int a = n%10;
                        n = n/10;
                        sm+=(a*fac(i));
                        }
            cout<<sm<<endl;
            }
    }
    return 0;
}
int str(int n)
{
    stringstream s;
    s << n;
    string ss = s.str();
    return ss.size();
}
int fac(int i)
{
    int sum = 1;
    for(int j=1;j<=i;j++){
        sum*=j;
    }
    return sum;
}
