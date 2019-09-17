#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,i,a=0,d=0;
string s;

int main()
{
	cin>>n>>s;
	for(i=0;i<=n;i++){
		if(s[i]=='A'){
			a++;
		}
		else if(s[i]=='D'){
			d++;
		}
	}
	if(a>d){
		cout<<"Anton";
	}
	else if(d>a){
		cout<<"Danik";
	}
	else if(a==d){
		cout<<"Friendship";
	}
	return 0;
}
