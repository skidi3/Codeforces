#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    string inp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>inp;
        if(inp.length()>10){
            cout<<inp[0]+to_string(inp.length()-2)+inp[inp.length()-1]<<endl;
        }
        else
            cout<< inp<<endl;
    }
 
}
