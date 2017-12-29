#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    vector<string>vc;
    vector<string>vcc;
    string s;int m;
    while(getline(cin,s) && s != "0"){
        string sum = "";int arr[101];
        for(int i=0;i<=s.size();i++){
            if(s[i] == ' ' || s[i] == '\0'){
                vc.push_back(sum);
                vcc.push_back(sum);
                sum = "";
            }
            else sum+=s[i];

        }
        int j = 0;
        for(int i=0;i<vcc.size();i++){
            arr[j++] = vcc[i].size();
        }
        m = arr[0];
        for(int i=1;i<j;i++){
            if(arr[i]>m) m = arr[i];
        }
        for(int i=0;i<vc.size();i++){
            cout<<vc[i].size();
            if(i!=vc.size()-1) cout<<"-";
        }
        cout<<endl;
        vc.clear();
    }
    cout<<endl;
    cout<<"The biggest word: ";
     sort(vcc.begin(),vcc.end());
     for(int i=0;i<vcc.size();i++){
        if(m == vcc[i].size()){
            cout<<vcc[i]<<endl;
            break;
        }
     }
    return 0;
}
