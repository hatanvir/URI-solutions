#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("ii.txt","r",stdin);
    //freopen("oo.txt","w",stdout);
    string s;
    while(getline(cin,s)){
        double sum = 0.0;
        double W = 1.00,H = 0.5,Q = 0.25,E = 0.125,S = 0.0625,T = 0.03125,X = 0.015625;
        int l = s.size();
        if(s == "*") break;
        else{
        for(int i=0;i<l;i++){
            if(s[i] == 'W'){
                    sum+=W;
            }
            else if(s[i] == 'H'){
                    sum+=H;
            }
            else if(s[i] == 'Q'){
                    sum+=Q;
            }
            else if(s[i] == 'E'){
                    sum+=E;
            }
            else if(s[i] == 'S'){
                    sum+=S;
            }
            else if(s[i] == 'T'){
                    sum+=T;
            }
            else if(s[i] == 'X'){
                    sum+=X;
            }
        }
        printf("%f\n",sum);
        sum = 0.0;
        }
    }
    return 0;
}
