#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	ll n, q, t;

	cin >> n >> q >> t;

	vector<ll> psum(n+1, 0);
	vector<ll> delta(n+2, 0);

	for(int i = 0; i < q; i++){
		ll l, r, x;

		cin >> l >> r >> x;

		delta[l] += x;
		delta[r + 1] -= x;
	}

	ll atual = 0;

	for(int i = 1; i <= n; i++){
		atual += delta[i];
		psum[i] = atual;
	}

	ll ans = 0;

	for(int i = 1; i <= n; i++)
		if(psum[i] >= t)
			ans++;

	cout << ans << "\n";

	return 0;
}