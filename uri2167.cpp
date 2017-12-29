#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;){
        if(arr[i]<arr[i-1]){
            m=1;
            c=i+1;
            break;
        }
        else{
            i++;
        }
    }
    if(m==1){
        cout<<c<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}
