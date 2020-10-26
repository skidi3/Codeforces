#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector <int> scores;
    int n,k,value,res=0;
    cin>>n>>k;
    for(int i=0; i<n;i++){
        cin>>value;
        scores.push_back(value);
    }
    int passScore = scores[k-1];
    for(int i=0; i<scores.size();i++){
        if(scores[i]>=passScore && scores[i]>0){
            res++;
        }
    }
    cout<<res;
}
