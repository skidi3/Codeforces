#include <bits/stdc++.h>
 
using namespace std;
	
int main(){
	int n,problem_solved=0;
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1 && b==1 && c==1){
			problem_solved++;
			}
		else if(a==0 && b==1 && c==1){
			problem_solved++;
			}
		else if(b==0 && a==1 && c==1){
			problem_solved++;
			}
		else if(c==0 && a==1 && b==1){
			problem_solved++;
			}
	}
	cout<<problem_solved;
}
