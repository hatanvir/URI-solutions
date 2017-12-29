#include<bits/stdc++.h>
using namespace std;

struct info
{
    string name;
    float kg;
}market[101];

int main()
{
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        string n;
        int q,sum = 0;
        int v1,v2;
        cin>>v1;
        for(int i=0;i<v1;i++){
            cin>>market[i].name>>market[i].kg;
        }
        cin>>v2;
        for(int j=0;j<v2;j++){
            cin>>n>>q;
            for(int k = 0;k<v1;k++){
                if(strcmp(n,market[k].name)!=0){
                  sum+=(float)q*market[k].kg;
                  break;
            }
            }
        }
        printf("R$ %.1f\n",sum);
    }
    return 0;
}
