#include <bits/stdc++.h>
using namespace std;
int main(){
    int upperCount=0, lowerCount=0;
    string s1;
    cin>> s1;
    for(int i=0;i<s1.length();i++){
        if(isupper(s1[i])){
            upperCount++;
        }
        else
            lowerCount++;
    }
    if(upperCount>lowerCount){
        for_each(s1.begin(), s1.end(), [](char & c) {
		c = toupper(c);
	});
    }
	else if(lowerCount>=upperCount){
        for_each(s1.begin(), s1.end(), [](char & c) {
		c = tolower(c);
	});
	}
	for(int i=0; i< s1.length();i++){
        cout<< s1[i];
	}
}
