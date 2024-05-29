#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, t, c, count = 0, ans = 0;
	queue<int> prisioneiros;
	
	for(int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		prisioneiros.push(aux)
	}

	for(int i = 0; i < n; i++){
		int atual;
		atual = prisioneiros.front();
		prisioneiros.pop();

		if(count < c){
			if(atual <= t){
				count++;
			}else{
				count = 0;
			}
		}else{
			ans++;
			count = c - 1;
		}
	}

	cout << ans << "\n";

	return 0;
		
}