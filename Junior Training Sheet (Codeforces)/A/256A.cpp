#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s,t;
  cin>>s;
  cin>>t;
  int counter = 0;
  for(int i=0;i<t.size();i++){
    if(t[i]==s[counter]){
        counter++;
    }
  }
  cout<< counter+1<<endl;
  return 0;
}
