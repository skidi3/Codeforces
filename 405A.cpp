#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> box;
    int n,value;
    cin>>n;
    while(n--){
        cin>>value;
        box.push_back(value);
    }
    sort(box.begin(),box.end());
    for(int i=0;i<box.size();i++){
            cout<< box[i]<<" ";
    }
}
