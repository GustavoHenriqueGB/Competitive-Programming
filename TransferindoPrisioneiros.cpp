#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, t, c, count = 0, ans = 0;
	queue<int> prisioneiros;

	cin >> n >> t >> c;
	
	for(int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		prisioneiros.push(aux);
	}

	for(int i = 0; i < n; i++){
		int atual;
		atual = prisioneiros.front();
		prisioneiros.pop();

		if(atual <= t)
			count++;
		else
			count = 0;

		if(count == c){
			ans++;
			count--;
		}
	}

	cout << ans << "\n";

	return 0;
		
}