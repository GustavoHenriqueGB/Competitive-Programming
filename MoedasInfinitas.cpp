#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0);

	long long int ans, n, a;

	cin >> n >> a;

	if(n % 500 <= a)
		cout << "Sim\n";
	else
		cout << "Nao\n";

	return 0;
}
