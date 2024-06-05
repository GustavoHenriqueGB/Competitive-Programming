#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	ll n, m, ans = 0;

	cin >> n >> m;

	vector<ll> casas(n, 0), psum(n + 1, 0), psum2(n + 1,0), delta(n + 2, 0), delta2(n + 2, 0);

	for(int i = 0; i < n; i++)
		cin >> casas[i];

	for(int i = 0; i < m; i++){
		ll l, r, a;
		
		cin >> l >> r >> a;

		delta[l] += a;
		delta[r + 1] -= a;
		delta2[l] += 1;
		delta2[r + 1] -= 1;
	}

	for(int i = 1; i <= n; i++)
		psum[i] = psum[i - 1] + delta[i];
	for(int i = 1; i <= n; i++)
		psum2[i] = psum2[i - 1] + delta2[i];

	for(int i = 0; i < n; i++){
		if(casas[i] - psum[i+1] > 0)	
			casas[i] -= psum[i+1];
		else
			casas[i] = 0;
	}
	
	for(int i = 0; i < n; i++)
		if(casas[i] != 0)
			ans += psum2[i + 1];
	
	cout << ans << "\n";

	return 0;
}