#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t;
 
	cin >> t;
 
	for(int i = 0; i < t; i++){
		int x1, x2, x3, x4, y1, y2, y3, y4;
		int base = 0, altura = 0;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
 
		if(x1 == x2)
			cout << abs(x1 - x3) * abs(y1 - y2) << "\n";
		else if(x1 == x3)
			cout << abs(x1 - x4) * abs(y1 - y3) << "\n";
		else
			cout << abs(x1 - x2) * abs(y1 - y4) << "\n";
 
	}
 
	return 0;
}