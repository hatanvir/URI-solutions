#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],sum = 0,c = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int avg = sum/n;

        for(int j=0;j<n;j++){
            if(arr[j]>avg) c++;
        }
        double above_st = (double)c/(double)n*100.00;
        printf("%.3lf",above_st);
        cout<<"%"<<endl;
    }
    return 0;
}
