#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t;

	cin >> t;

	for(int i = 0; i < t; i++){
		int a, b, c;
		cin >> a >> b >> c;

		if((a + b)== c)
			cout << "+\n";
		else if((a - b) == c)
			cout << "-\n";

	}

	return 0;
}