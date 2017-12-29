#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int str(string a,string b)
{
    if(a=="tesoura" && b=="papel")
        return 1;
    if(a=="papel" && b=="pedra")
        return 1;
    if(a=="pedra" && b=="lagarto")
        return 1;
    if(a=="lagarto" && b=="Spock")
        return 1;
    if(a=="Spock" && b=="tesoura")
        return 1;
    if(a=="tesoura" && b=="lagarto")
        return 1;
    if(a=="lagarto " && b=="papel")
        return 1;
    if(a=="papel" && b=="Spock")
        return 1;
    if(a=="Spock" && b=="pedra")
        return 1;
    if(a=="pedra" && b=="tesoura")
        return 1;
}
int main()
{
    int i,n;
    string x,y;

    cin>>n;
    for(i=0;i<n;i++){

        cin>>x>>y;
        cout<<"Caso #"<<i+1<<": ";

        if(x==y){
            cout<<"De novo!" <<endl;
        }
        else if(str(x,y)){
            cout<<"Bazinga!" <<endl;
        }
        else
            cout<<"Raj trapaceou!" <<endl;
    }
    return 0;
}

