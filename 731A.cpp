#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int res=0;
    int start=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
            int index = s[i]-97; //ASCII Values
            int walk = abs(start-index);
            if(walk<13){
                res += walk;
            }
            else{
                res += 26 - walk;
            }
            start = index;
    }
    cout<<res<<endl;
}
