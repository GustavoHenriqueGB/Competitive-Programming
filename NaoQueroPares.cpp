#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int t;

	cin >> t;

	for(int i = 0; i < t; i++){
		set<int> numeros;
		int n, ans = 0;

		cin >> n;

		vector<int> vetor;

		for(int j = 0; j < n; j++){
			int aux;
			cin >> aux;

			if(aux % 2 == 0)
				if(!numeros.count(aux)){
					numeros.insert(aux);
					vetor.push_back(aux);
				}
		}

		sort(vetor.begin(), vetor.end());

		while(true){
			if(vetor.size()){
				int j = vetor.size() - 1, numeroAtual = vetor[j] / 2;
				ans++;
				vetor.pop_back();

				if(numeroAtual % 2 == 0)
					if(!(numeros.count(numeroAtual))){
						vetor.push_back(numeroAtual);
						numeros.insert(numeroAtual);
				}

			}else
				break;
		}

		cout << ans << "\n";

	}

	return 0;
}