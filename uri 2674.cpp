#include<bits/stdc++.h>
using namespace std;

int prime(int);
int main()
{
    string s,s1;
    while(cin>>s){

    int sum=0,coun=0;
    s1=s;
    stringstream g(s);
    int n=0;
    g >> n;
    int l = s1.size();
    bool v = true;
    if(prime(n)){
         for(int i=0;i<l;i++){
             int temp = s[i]-'0';
             if(!prime(temp)){
                v = false;
                break;
             }
         }

        if(v){
            cout<<"Super"<<endl;
        }
        else {
                cout<<"Primo"<<endl;
        }
    }
        else cout<<"Nada"<<endl;
    }

    return 0;
}
int prime(int temp)
{
    int c;
    if(temp == 0 || temp == 1) return 0;
    for(int j=2;j<=temp/2;j++){
            if(temp%j==0){
                    return 0;
                    break;
            }
        }
        return 1;
}
