#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>> s1>>s2;
    for_each(s1.begin(), s1.end(), [](char & c) {
		c = tolower(c);
	});
	for_each(s2.begin(), s2.end(), [](char & c) {
		c = tolower(c);
	});
    if(s1>s2){
        cout<< 1;
    }
    else if(s1<s2){
        cout<< -1;
    }
    else
        cout<< 0;
}
