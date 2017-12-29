#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int n;
    set<string>vec;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        vec.insert(s);
    }
    printf("Falta(m) %d pomekon(s).\n",151-vec.size());

    return 0;
}
