#include<bits/stdc++.h>
using namespace std;

int str(string);
int main()
{
    vector<string>vc;
    int t;
    string s;
    cin>>t;
    while(t--){
        string sum = "";
        cin>>s;
        for(int i=0;i<=s.size();i++){
            if(isalpha(s[i]) || s[i] == '\0'){
                vc.push_back(sum);
                sum = "";
            }
            else sum+=s[i];

        }
        int add = 0;
        for(int i=0;i<vc.size();i++){
            add+=str(vc[i]);
        }
        cout<<add<<endl;
        vc.clear();
    }
    return 0;
}
int str(string s)
{
    stringstream ss(s);
    int n = 0;
    ss>>n;
    return n;
}
