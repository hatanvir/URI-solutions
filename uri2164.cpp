#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double x,y,z;
    cin>>n;

        x=(1+sqrt(5))/2;
        y=(1-sqrt(5))/2;
        z=((pow(x,n)-pow(y,n))/sqrt(5));

        printf("%.1lf\n",z);

    return 0;
}
