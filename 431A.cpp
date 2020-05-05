#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int res=0,value;
    vector <int> cal;
    string s;
    for(int i=0;i<4;i++){
        cin>>value;
        cal.push_back(value);
    }
    cin>>s;
    for(int j=0;j<s.size();j++){
        if(s[j]=='1'){
            res+=cal[0];
        }
        else if(s[j]=='2'){
            res+=cal[1];
        }
        else if(s[j]=='3'){
            res+=cal[2];
        }
        else if(s[j]=='4'){
            res+=cal[3];
        }
    }
    cout<<res<<endl;
}
