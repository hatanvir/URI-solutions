#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(getline(cin,s1)){
        int c=0;
        getline(cin,s2);
        for(int i=0;i<s1.size();i++){
            for(int j=0;j<s2.size();j++){
                if(s1[i]==s2[j]){
                    c++;
                    break;
                }
            }
        }
    cout<<c<<endl;
    }
    return 0;
}
