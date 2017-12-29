#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    vector<string>vc;
    vector<string>vcc;
    string s;
    while(getline(cin,s)){
         string sum = "";
        for(int i=0;i<=s.size();i++){
            if(s[i] == '\0' || s[i] == ' '){
                vc.push_back(sum);
                sum = "";
            }
            else sum+=s[i];
        }
        for(int i=0;i<vc.size();i++){
                //cout<<vc[i].find('.')<<endl;
            if(vc[i] == "" || vc[i] == "." || vc[i].find('.') < vc[i].size()-1 || vc[i].find('0')<=50 ||
               vc[i].find('1')<=50 || vc[i].find('2')<=50 || vc[i].find('3')<=50 || vc[i].find('4')<=50 ||
               vc[i].find('5')<=50 || vc[i].find('6')<=50 || vc[i].find('7')<=50 || vc[i].find('8')<=50 || vc[i].find('9')<=50){
                continue;
            }
            else {
                vcc.push_back(vc[i]);
            }
        }
        int len = 0,avg;
        for(int j=0;j<vcc.size();j++){
            if(vcc[j].find('.')<=50){
                len+=vcc[j].size()-1;
            }
            else len+=vcc[j].size();
        }
        int vec_len = vcc.size();
        if(vec_len == 0){
            avg = 1;
        }
        else {
             avg = len/vec_len;
           //cout<<len<<" "<<vec_len<<" "<<avg<<endl;
        }
        //cout<<avg<<endl;
        if(avg <= 3) cout<<250<<endl;
        else if(avg >= 4 && avg <= 5) cout<<500<<endl;
        else cout<<1000<<endl;
        vc.clear();
        vcc.clear();
    }
    return 0;
}
