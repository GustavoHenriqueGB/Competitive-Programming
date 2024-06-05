#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	ll n, q, l, ans = 0, maior = 0;;

	cin >> n >> q >> l;
	vector<ll> psum(n + 1, 0), delta(n + 2, 0);

	for(int i = 0; i < q; i++){
		ll li, ri, mi;

		cin >> li >> ri >> mi;

		delta[li] += (mi > l ? 1 : 0);
		delta[ri + 1] += (mi > l ? -1 : 0);
	}

	for(int i = 0; i < n; i++)
		psum[i + 1] = psum[i] + delta[i + 1];

	for(int i = 0; i <= n ; i++)
		if(psum[i] > maior && psum[i] != 0)
			maior = psum[i];

	for(int i = 0; i <= n + 1; i++){
		ll aux = 0, j = i;
		if(maior != 0 && psum[i] == maior){
			while(true){
				if(psum[j] == maior){
					aux++;
					j++;
				}else
					break;
				if(aux > ans)
					ans = aux;
			}
		}
	}

	if(ans)
		cout << ans << "\n";
	else
		cout << -1 << "\n";
	
	return 0;
}