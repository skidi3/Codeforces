#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
 
int main(){
    int n,m,value;
    string res;
    vector <int> a;
    vector <int> b;
    vector <int> cross;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>value;
        a.push_back(value);
    }
    for(int i=0;i<m;i++){
        cin>> value;
        b.push_back(value);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                value = a[i];
                cross.push_back(value);
            }
            else{
                res = to_string(min(a[0],b[0])) + to_string(max(a[0],b[0]));
            }
        }
    }
    sort(cross.begin(),cross.end());
    if(cross.size()>0){
        cout<< cross[0];
        return 0;
    }
    cout<< stoi(res);
}
