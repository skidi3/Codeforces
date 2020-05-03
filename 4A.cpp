#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
 
int main(){
    int weigh,A;
    cin>> weigh;
    for(int i=1; i<=weigh;i++){
        if(i%2==0){
            A = weigh - i;
            if(A%2==0 && A!= 0){
                cout<< "YES";
                return 0;
            }
        }
    }
    cout<< "NO";
}
