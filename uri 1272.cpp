#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>vc;
    int t;
    string s;
    cin>>t;
    while(t--){
        getline(cin,s);
        string sum = "";
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                sum+=s[i];
            }
            else if(sum != " " || sum != "."){
                vc.push_back(sum);
                sum = "";
            }
            else{
                continue;
            }
        }
        for(int j=0;j<vc.size();j++){
            cout<<vc[j]<<endl;
        }
    }
    return 0;
}
