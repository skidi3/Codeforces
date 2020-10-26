#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int Y,W,c;
    cin>>Y>>W;
    c = max(Y,W);
    c = (6-c)+1;
    //2,4,6
    if(c%2==0){
        if(c==4){
            cout<<"2/3"<<endl;
        }
        else if(c==2){
            cout<<"1/3"<<endl;
        }
        else
            cout<<"1/1"<<endl;
    } //1,3,5
    else{
        if(c==3){
            cout<<"1/2"<<endl;
        }
        else if(c==1){
            cout<<"1/6"<<endl;
        }
        else
            cout<<"5/6"<<endl;
    }
    return 0;
}
