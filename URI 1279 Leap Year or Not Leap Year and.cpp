#include<bits/stdc++.h>
using namespace std;

int strings(string);
int leapyear(int);
int hulu(int);
int bulu(int);
int main()
{
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    string s;
    int n;
    while(cin>>s){
         n = strings(s);
         if(leapyear(n)){
             if(hulu(n)){
                cout<<"This is huluculu festival year."<<endl;
             }
             else if(bulu(n)){
                cout<<"This is buluculu festival year."<<endl;
             }
         }
         else if(hulu(n)) cout<<"This is huluculu festival year."<<endl;
         else if(bulu(n)) cout<<"This is buluculu festival year."<<endl;
         else cout<<"This is an ordinary year."<<endl;
         cout<<endl;
    }
    return 0;
}
int strings(string s)
{
    stringstream st(s);
    int n=0;
    st >> n;
    return n;
}
int leapyear(int n)
{
    if(n%4 == 0){
        if(n%100 == 0){
            if(n%400){
                return 1;
            }
            else return 0;
        }
        else return 1;
    }
    else return 0;
}
int hulu(int n)
{
    if(n%15 == 0) return 1;
    else return 0;
}
int bulu(int n)
{
    if(n%55 == 0)return 1;
    else return 0;
}
