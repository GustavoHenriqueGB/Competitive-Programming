#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	long long int n, i = 1;
	cin >> n;

	while(pow(i,3) < n)
		i++;

	if(pow(i,3) == n)
		cout << i << "\n";
	else
		cout << -1 << "\n";
	
	return 0;
}