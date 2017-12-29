#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
   long long int a,b;
    scanf("%lld%lld",&a,&b);
        long long int sum = 0;
        sum = (a+b)*(b-a+1)/2;
        printf("%lld\n",sum);

    return 0;
}
