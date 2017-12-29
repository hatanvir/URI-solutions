
#include<bits/stdc++.h>
using namespace std;
int com(int c);
struct info
{
    string name;
    string a;
    int c,co;
    int cal;
}stud[100];
int main()
{
    freopen("inn.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,n,temp,m=1;
    string a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>stud[j].name;
        }
        for(int k=0;k<n;k++)
            cin>>stud[k].a;

            for(int i=0;i<n;i++){

                 for(int l=0;l<stud[i].a.size();l++){
                       if(stud[i].a=='P'){
                           stud[i].c++;
                       }
                       if(stud[l].a!='M'){
                           stud[i].co++;
                       }
                }
        stud[i].cal = (stud[i].c*100.00)/(stud[i].co);
        }
        for(int i=0;i<a.size();i++){
            if(stud[i].cal<75){
                    cout<<stud[i].name<<" ";
                }
        stud[i].c = 0;
        stud[i].co = 0;
        stud[i].cal = 0;
        }
        cout<<endl;
    }

    return 0;
}
