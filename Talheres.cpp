#include <bits/stdc++.h>

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	long long int n, g, f, c, ans, menor;

	cin >> n >> g >> f >> c;

	if(g > f)
	    menor = f;
	else
	 menor = g;

	ans = c + menor;
	if(ans > n)
		cout << n;
	else
		cout << ans << "\n";
	
	return 0;
}