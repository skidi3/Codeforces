#include <iostream> 
using namespace std;

#define int long long
signed main(){
    int n,t,k,d;
    int currt = 0;
    cin >> n >> t >> k >> d;
    while (currt <= d) {
        n -= k;
        currt += t;
    }
 
    if (n > 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
 
    return 0;
}
