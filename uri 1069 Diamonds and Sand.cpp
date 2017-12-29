#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int c1 = 0,c2 = 0,temp=0,t;
        int l = s.size();
        for(int i=0;i<l;i++){
            if(s[i] == '<'){
                    c1++;
            }
            else if(s[i] == '>' and c1>0){
                c1--;
                c2++;
            }
        }
        cout<<c2<<endl;
    }
    return 0;
}

