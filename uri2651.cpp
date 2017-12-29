#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string ss = "zelda";

    if(s.find(ss)>=0 && s.find(ss)<=100){
        cout<<"Link Bolado"<<endl;
    }
    else{
        cout<<"Link Tranquilo"<<endl;
    }
    return 0;
}

