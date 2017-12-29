#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    string s;
    getline(cin,s);
    int l=s.size();
    if(l<=140){
        cout<<"TWEET"<<endl;
    }
    else
        cout<<"MUTE"<<endl;
    return 0;
}
