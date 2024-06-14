#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int f, a, r, m, n;
	string entrada;

	cin >> f >> a >> r >> m >> n >> entrada;

	vector<int> tamanduas(1, m);

	for(int i = 0; i < n; i++){
		int cupimAtual;
		if(entrada[i] == 'F')
			cupimAtual = f;
		else if(entrada[i] == 'A')
			cupimAtual = a;
		else if(entrada[i] == 'R')
			cupimAtual = r;

		bool checagem = 0;
		for(int j = 0; j < tamanduas.size(); j++){
			if(tamanduas[j] >= cupimAtual){
				tamanduas[j] -= cupimAtual;
				checagem = 1	;
				break;
			}
		}

		if(!checagem)
			tamanduas.push_back(m - cupimAtual);
	}

	cout << tamanduas.size() << "\n";
	return 0;
}