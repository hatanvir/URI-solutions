#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum,j;
    string v;
    cin>>n;
    for(i=0;i<n;i++){
        j=0,sum=0;
        cin>>v;
        while(1){
            if(v[j]=='\0')
                break;
            if(v[j]=='1')
                sum+=2;
            if(v[j]=='2')
                sum+=5;
            if(v[j]=='3')
                sum+=5;
            if(v[j]=='4')
                sum+=4;
            if(v[j]=='5')
                sum+=5;
            if(v[j]=='6')
                sum+=6;
            if(v[j]=='7')
                sum+=3;
            if(v[j]=='8')
                sum+=7;
            if(v[j]=='9')
                sum+=6;
            if(v[j]=='0')
                sum+=6;
            j++;
        }
        cout<<sum<<" leds"<<endl;
    }
}
