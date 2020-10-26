#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>> s1;
    int counter=s1.length();
    sort(s1.begin(),s1.end());
    for(int i=0;i<s1.length()-1;i++){
        if(s1[i]==s1[i+1]){
            counter--;
        }
    }
    if(counter%2==0){
        cout<< "CHAT WITH HER!";
    }
    else
        cout<< "IGNORE HIM!";
}
