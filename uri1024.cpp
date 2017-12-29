#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int i,n,j;
    cin>>n;
    string s;

    while(n--){
        cin.ignore();
        getline(cin,s);

        for(j=0;s[j]!='\0';j++){
             if(s[j]>=65 && s[j]<=126){
               s[j]=s[j]+3;
        }
    }
    reverse(s.begin(),s.end());
    int l=s.length();


    for(i=l/2;i<l;i++){
        s[i]-=1;
    }
        cout<<s<<endl;
    }
    return 0;
}
