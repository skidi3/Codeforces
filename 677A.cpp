#include<iostream>
using namespace std;
int n,h,a,s=0;
int main()
{
  cin >> n >> h;  \\Take Inputs of Height and number of friends. 
    for (int i = 0; i < n; i++) {
        cin >> a; 
        if (a > h) {
            s++;
        }
        s++;
    }
    return s;
}
