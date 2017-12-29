#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string s;
    while(true){
         getline(cin,s);
         for(int i=0;i<s.size();i++){
            if(s[i]==' ') {
                    c++;
            }
         }
         int si = s.size();
         int a = si/(c+1);
         if(a<=3) cout<<250<<endl;
         else if(a==4 || a==5) cout<<500<<endl;
         else cout<<1000<<endl;
    }
    return 0;
}
