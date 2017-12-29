#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b;
    int sum;
    string st,str;
    while(true){
        stringstream s;
        cin>>a>>b;
        if(a == 0 && b == 0){
            break;
        }
        else{
            sum=a+b;
            s<<sum;
            st = s.str();
            for(i=0;i<st.size();i++){
                if(st[i]!='0'){
                    str+=st[i];
                }
            }
            cout<<str<<endl;
            str = "\0";
        }
    }
    return 0;
}
