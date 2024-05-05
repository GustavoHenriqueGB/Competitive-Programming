#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long int t, a, b, c, d;

	cin >> t;

	for(int i = 0; i < t; i++){
		int count = 0;
		cin >> a >> b >> c >> d;

		if(a < b)
			count++;
		if(a < c)
			count++;
		if(a < d)
			count++;

		cout << count << '\n';	

	}

	return 0;
}