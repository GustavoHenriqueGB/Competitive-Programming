#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t;
	cin >> t;

	for(int i = 0; i < t; i++){
		int x, y;

		cin >> x;

		if(x % 2 == 0)
			cout << x / 2 << "\n";
		else 
			cout << x - 1 << "\n";
	}

	return 0;
}