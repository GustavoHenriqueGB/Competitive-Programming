#include<bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
 
	ll n, q, aux;
	cin >> n >> q;
 
	vector<ll> answer(n+1,0);
	vector<ll> delta(n+2,0);

	for(int i = 0; i < q; i++){
		ll l, r, x;
		cin >> l >> r >> x;
		delta[l] += x;
		delta[r + 1] -= x;
	}

	ll atual = 0;

	for(int i = 1; i < n + 1; i++){
		atual += delta[i];
		answer[i] = atual;
	}

	for(int i = 1; i < n + 1; i++)
 		cout << answer[i] << " ";
 	cout << "\n";

	return 0;
}