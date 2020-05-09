#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string res;
    string s;
    cin>>s;
    int n = s.length();
    //Fractional Part is Present & split Integer part
    if(s.find('.')!= string::npos){
            int idx = s.find(".");
            for(int j=0;j<=idx;j++){
                res+=s[j];
            }
            if(s[idx+1]){
                res+=s[idx+1];
                }
            else{
                res+='0';
            }
            if(s[idx+2]){
                res+=s[idx+2];
            }
            else{
                res+='0';
            }
            int counter = 1;
            for(int j = idx-1; j!=0;j--){
                if(counter%3==0){
                    res = res.substr(0,j) + ',' + res.substr(j,res.size());
                }
                counter++;
            }
        }
    //Fractional part not present & Split integer part
    else {
        s += ".00";
        res = s;
        int idx = res.find(".");
        int counter = 1;
        for(int j = idx-1; j!=0;j--){
                if(counter%3==0){
                    res = res.substr(0,j) + ',' + res.substr(j,res.size());
                }
                counter++;
            }
    }
    //If 0th term is ","
    if(res[0]=='-' && res[1]==','){
            res = "-" + res.substr(2,res.size());
    }
    //Negative check
    if(res[0]== '-'){
        res = "(" + res.substr(1,res.size()-1) + ")";
    }
    //Add $ in front
    if(res[0]=='('){
        res = "($" + res.substr(1,res.size());
       }
    else
        res = "$" + res.substr(0,res.size());
    cout<<res<<endl;
}
