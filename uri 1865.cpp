#include<iostream>
using namespace std;

int main()
{
    char arr[100];
    int i,n,v;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr>>v;
        if(arr[0]=='T' && arr[1]=='h' && arr[2]=='o' && arr[3]=='r'){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
    return 0;
}
