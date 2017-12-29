#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int countsp=0, countup=0, countlow=0, countnum=0, countall=0;
        if(str.size() < 6 || str.size() > 32)
            cout<<"Senha invalida."<<endl;
            else{

            for(int i=0; i<str.size(); i++)
            {
                if(str[i] >= 'A' and str[i] <= 'Z')
                    countup++;
                else if(str[i] >= 'a' and str[i] <= 'z')
                    countlow++;
                else if(str[i] == ' ')
                    countsp++;
                else if(str[i] >= '0' and str[i] <= '9')
                    countnum++;

                else
                    countall++;

            }
            if(countup >= 1 and countlow >=1 and countsp == 0 and countnum >= 1 and countall == 0)
                cout<<"Senha valida."<<endl;
            else
                cout<<"Senha invalida."<<endl;
            }
        }
    return 0;
}
