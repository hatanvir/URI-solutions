#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    int t;
    string s;
    cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        transform(s.begin(),s.end(),s.begin(),::tolower);
        sort(s.begin(),s.end());
        int arr[200];
        int j = 0;
        for(int i=0;i<s.size();i++){
                if(isalpha(s[i])){
                     mp[s[i]]++;
                }
        }
        map<char,int>::iterator it = mp.begin();
        for(;it!=mp.end();it++){
            arr[j++] = (*it).second;
        }
        int m = arr[0];
        for(int k=1;k<j;k++){
            if(m<arr[k]) m = arr[k];
        }
         map<char,int>::iterator i = mp.begin();
         for(;i!=mp.end();i++){
            if((*i).second == m){
                    cout<<(*i).first;
            }
        }
        cout<<endl;
        mp.clear();
    }
    return 0;
}
