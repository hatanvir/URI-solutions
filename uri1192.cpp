#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,st1=0,str1=0,c1,c2,c3;
    string s,st,str;
    cin>>t;
    while(t--){
        cin>>s;
        int l = s.size();
        st = s[0];
        str = s[l-1];
        stringstream geek(st);
        stringstream geek1(str);
        geek >> st1;
        geek1 >> str1;
        if(st1 == str1){
                cout<<st1*str1<<endl;
        }
        else{

        for(int i=0;i<l;i++){

            if(s[i]>='A' && s[i]<='Z'){
               c1 = 1;
               break;
            }
            else if(s[i]>='a' && s[i]<='z'){
               c2=1;
               break;
            }
        }
        if(c1 == 1){
            cout<<str1-st1<<endl;
        }
        else if(c2 == 1){
            cout<<st1+str1<<endl;
        }
        }
        c1=0,c2=0;
    }
    return 0;
}
