#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,x,y,level,result;
    cin>>a>>x>>y;
    level = (y/a)+1;
    //Base Case
    if (y == 0 || abs(x) >= a || y % a == 0){
        cout<< -1;
		return 0;
    }
    // First sq
    if(level == 1) {
		if(abs(x)<(a+1)/2){
            result = level;
		}
		else
            result = -1;
	}
    //Odd levels [2 squares]
    else if(level%2 != 0){
        int levels_in_between = (level/2) -1;
        int oddlevel = 2 + levels_in_between*2 + levels_in_between+1; //Initial + 2 sq + 1 sq +next sq
        if(abs(x)<=a){
            if(x<0){
                result = oddlevel;
            }
            else if(x>0){
                result = oddlevel + 1;
            }
            else
                result = -1;
        }
        else
            result = -1;
    }
    // Even levels
    else if(level != 1 && level%2 ==0){
        int levels_in_between = (level/2) -1;
        int evenlevel = 1 + levels_in_between + levels_in_between*2 + 1; //Initial + 1 sq + 2sq + next sq
        if(abs(x)<(a+1)/2){
            result = evenlevel;
        }
        else
            result = -1;
    }
    cout<< result<< endl;
    return 0;
}
