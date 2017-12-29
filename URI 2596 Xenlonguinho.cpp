#include<bits/stdc++.h>
using namespace std;

int even(int);
int main()
{
   int t,n;
   cin>>t;
   while(t--){
      cin>>n;
      int c = 0;
      for(int i=1;i<=n;i++){
        if(even(i)){
            c++;
        }
      }
      cout<<c<<endl;
   }
   return 0;
}
int even(int i)
{
    int c =0;
    for(int j=1;j<=i;j++){
        if(j%i==0){
            c++;
        }
    }
    if(c%2==0) return 1;
    else return 0;
}
