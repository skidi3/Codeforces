#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,value,counter=1;
    vector <int> valueArr;
    cin>>n;
    while(n--){
        cin>>value;
        valueArr.push_back(value);
    }
    for(int i=0;i < valueArr.size()-1;i++){
        if(valueArr[i]==valueArr[i+1]){
            continue;
        }
        else
            counter++;
    }
    cout<<counter;
}
