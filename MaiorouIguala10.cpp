#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t;

	cin >> t;

	for(int i = 0; i < t; i++){
		int a, b, c;

		cin >> a >> b >> c;

		if(((b + c) >= 10) or ((a + c) >= 10 or ((a + b) >= 10)))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}