#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,res=0,value;
    string s;
	cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            res++;
        }
    }
    cout<<res<<endl;
    return 0;
}
