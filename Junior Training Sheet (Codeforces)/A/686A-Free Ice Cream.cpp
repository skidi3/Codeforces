/*                                                                                Codeforces 686-A. 
                                                                                   Free Ice Cream

After their adventure with the magic mirror Kay and Gerda have returned home and sometimes give free ice cream to kids in the summer.
At the start of the day they have x ice cream packs. Since the ice cream is free, people start standing in the queue before Kay and Gerda's house even in the night. Each person in the queue wants either to take several ice cream packs for himself and his friends or to give several ice cream packs to Kay and Gerda (carriers that bring ice cream have to stand in the same queue).
If a carrier with d ice cream packs comes to the house, then Kay and Gerda take all his packs. If a child who wants to take d ice cream packs comes to the house, then Kay and Gerda will give him d packs if they have enough ice cream, otherwise the child will get no ice cream at all and will leave in distress.
Kay wants to find the amount of ice cream they will have after all people will leave from the queue, and Gerda wants to find the number of distressed kids.

*/




#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long int n,x,value; 
	char sign;
	cin>>n>>x;
	long long int left=x,child=0;
	for(int i=0; i<n; i++){
		cin>>sign>>value;
		if(sign=='+' && value>=0){
			left += value;
			}
		else {
			if(left-value>=0){
				left -= value;
				}
			else{
				child++;
				}
			}
		}
	cout<<left<<' '<<child<<endl;
} 
