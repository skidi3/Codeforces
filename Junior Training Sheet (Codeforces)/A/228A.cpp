#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> arr;
  int value;
  int counter = 0;
  for(int i=0;i<=3;i++){
    cin>>value;
    arr.push_back(value);
  }
  for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
        if(arr[i]==arr[j] && i!=j){
            arr[i]=0;
            counter++;
        }
    }
  }
  cout<< counter;
}
