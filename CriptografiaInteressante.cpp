#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	ll n, m, c;

	cin >> n >> m >> c;

	vector<ll> mensagem(n, 0), cifragem(m, 0), ans(n, 0), delta(n + 2, 0), psum (n + 1, 0);

	for(int i = 0; i < n; i++)
		cin >> mensagem[i];

	for(int i = 1; i <= m; i++){
		int aux;
		cin >> aux;
		delta[i] += aux;
		delta[i + (n-m+1)] -= aux;
	}

	for(int i = 1; i <= n; i++)
		psum[i] = psum[i-1] + delta[i];

	for(int i = 0; i < n; i++)
		ans[i] = (mensagem[i] + psum[i + 1]) % c;

	for(int i = 0; i < n; i++)
		cout << ans[i] << " ";
	cout << "\n"; 

	return 0;
}