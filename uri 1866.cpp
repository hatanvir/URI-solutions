#include<iostream>
using namespace std;

int main()
{
    int n,value,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>value;
    int sum1=0,sum2=0;
        for(j=1;j<=value;j++){
            if(j%2!=0){
                sum1+=1;
            }
            else{
                sum2+=1;
            }
        }
        cout<<sum1-sum2<<endl;
    }
    return 0;
}
