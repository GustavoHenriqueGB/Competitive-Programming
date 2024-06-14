#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	ll n, m, q;

	cin >> n >> m >> q;

	vector<ll> arvores(n,0), psum(n+1, 0),delta(n+2, 0);

	for(int i = 0; i < n; i ++)
		cin >> arvores[i];

	for(int i = 0; i < q; i++){
		ll l, r, x, m;

		cin >> l >> r >> x >> m;

		if( m <= 5){
			delta[l] += x;
			delta[r + 1] -= x;
		}
	}

	for(int i = 1; i <= n; i++)
		psum[i] = psum[i - 1] + delta[i];

	for(int i = 1; i <= n; i++)
		cout << arvores[i - 1] + psum[i] << " ";
	cout << "\n";

	return 0;
}