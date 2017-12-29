#include<iostream>
using namespace std;

int main()
{
    int i,n,id[5],j,v;
    float m,note[5];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>id[i]>>note[i];
    }
     m=note[0];
        for(j=1;j<n;j++){
            if(m<note[j]){
                m=note[j];
                v=id[j];
            }
    }
    if(m>=8.00)
        cout<<v<<endl;
    else
        cout<<"Minimum note not reached"<<endl;

 return 0;
 }
