#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t;

	cin >> t;

	for(int i = 0; i < t; i++){
		int a, b;
		cin >> a >> b;
		cout << (a^(a&b)) + (b^(a&b)) << "\n";
	}

	return 0;
}