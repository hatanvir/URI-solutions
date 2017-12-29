#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("I.TXT","r",stdin);
    freopen("o.txt","w",stdout);
    vector<string>vc;
    int t;
    string s;
    int c = 0;
    bool b = false;
    while(cin>>t && t != 0){
            if(b){
                cout<<endl;
            }
            else b = !b;

        int arr[t];
        int j = 0;
        for(int i=0;i<t;i++){
            cin>>s;
            vc.push_back(s);
        }
        for(int i=0;i<vc.size();i++){
           arr[j++] = vc[i].size();
        }
        //max
        int m = arr[0];
        for(int j=1;j<vc.size();j++){
            if(m<arr[j]) m = arr[j];
        }
        int c = 0;
        string n_line = "\n";
        for(int j=0;j<vc.size();){
            int d = m - vc[j].size();
            for(int space = 0 ; space<d ; space++){
                cout<<" ";
            }
            cout<<vc[j]<<endl;
            j++;
        }
        //cout<<"kjxg"<<endl;
        vc.clear();
    }
    return 0;
}
