#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,c,d;
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2;
    cin>>c1>>c2;
    cin>>d1>>d2;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            for(int k=1;k<=9;k++){
                for(int l=1;l<=9;l++){
                    if((i+j==r1)&&(k+l==r2)&&(i+k==c1)&&(j+l==c2)&&(i+l==d1)&&(k+j==d2)&& i!=j && i!=k &&i!=l && j!=k && j!=l && k!=l){
                        cout<<i<<" "<<j<<endl;
                        cout<<k<<" "<<l<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<< -1;
    return 0;
}
