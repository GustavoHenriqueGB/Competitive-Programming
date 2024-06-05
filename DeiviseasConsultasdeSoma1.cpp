#include<bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
 
	int n, q, aux;
	cin >> n >> q;
 
	vector<int> entrada(n,0);
	vector<ll> answer(n+1,0);
 
	for(int i = 0; i < n; i++){
		cin >> aux;
		entrada[i] = aux;
	}
 
	for(int i = 0; i < n; i++){
		answer[i + 1] = entrada[i] + answer[i];
	}
 
	for(int i = 0; i < q; i++){
		int a, b;
		cin >> a >> b;
		cout << answer[b] - answer[a - 1] << "\n";
	}
 
	return 0;
}