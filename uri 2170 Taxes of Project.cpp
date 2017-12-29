#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ii.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    double a,b;
    int i = 1;
    while(scanf("%lf%lf",&a,&b)!=EOF){
        double sum = ((b-a)*100.0)/a;
        printf("Projeto %d:\n",i);
        printf("Percentual dos juros da aplicacao: %.2lf",sum);
        cout<<" %"<<endl<<endl;
        i++;
    }
    return 0;
}
