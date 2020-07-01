#include <iostream>
#include <vector>
using namespace std;
int main(){
    int res = 0;
    int n,b,d,sum=0;
    cin>>n>>b>>d;
    for(int i=0; i < n;i++){
		int item;
		cin>> item;
		if(item<=b){
			sum += item;
		}  
        if(sum>d){
            res++;
            sum = 0;
        }
    }
    cout<<res<<endl;
}
