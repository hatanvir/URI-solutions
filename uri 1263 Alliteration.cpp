#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("inn.txt","r",stdin);
    int i,v,coun=0;
    string b,c;
    char a;
    while(true){
            cin>>a>>b;
        if(a=='0' && b[0]=='0'){
            break;
        }
        else{
            for(i=0;i<b.size();i++){
                if(b[i]!=a){
                   c+=b[i];
                }
            }
            for(int j=0;j<c.size();j++){
                if(c[j]=='0'){
                    coun++;
                }
            }
            if(coun==c.size() || c.size() == 0){
                cout<< 0 <<endl;
            }
            else{
                cout<< c <<endl;
            }
          c="\0";
        }

    }
    return 0;
}
