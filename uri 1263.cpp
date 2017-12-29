#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    vector<string>vc;
    map<char,int>mp;
    string s,sum = "";
    while(getline(cin,s)){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<=s.size();i++){
            if(isalpha(s[i])){
                sum+=s[i];
            }
            else if(s[i] == ' ' || s[i] == '\0'){
                vc.push_back(sum);
                sum = "";
            }
        }
        //sort(vc.begin(),vc.end());
        int c = 0;
            for(int i=1;i<vc.size();i++){
                if(vc[i-1][0] == vc[i][0] && vc[i].size() != vc[i-1].size()){
                    c++;
                    i+=1;
                }
            }
            /*map<char,int>::iterator it = mp.begin();
            for(;it!=mp.end();it++){
                //if((*it).second>=2) c++;
                cout<<(*it).first<<" "<<(*it).second<<endl;
            }*/
            cout<<c<<endl;
            c = 0;
            vc.clear();
            mp.clear();
    }
    return 0;
}
