#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n,v,count=0;
    cin>>n;
    unsigned long int c;

    while(n--){
    cin>>v;
    unsigned long int arr[v][v];
      for(int i=0;i<v;i++){
          for(int j=0;j<v;j++){
              cin>>arr[i][j];
              count++;
         }
       }
       cout<<"Quadrado da matriz #"<<count<<":"<<endl;
       for(int i=0;i<v;i++){
          for(int j=0;j<v;j++){
                c=pow(arr[i][j],2);
               cout<<c<<" ";
         }
         cout<<endl;
       }
    }
    return 0;
}
