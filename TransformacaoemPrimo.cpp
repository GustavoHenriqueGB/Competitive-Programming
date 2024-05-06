#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t;

	cin >> t;

	for(int i = 0; i < t; i++){
		long long int x, y;
		bool primo = 0;

		cin >> x >> y;

		if((x - y) != 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

return 0;
}