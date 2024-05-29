#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n;
	set<int> erros;
	vector<int> entradas;
	stack<int> ans;

	cin >> n;

	for(int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		entradas.push_back(aux)
	}



	for(int i = 0; i < n - 2; i++){
		int aux;
		cin >> aux;
		if(!(erros.count(aux)))

	}	
	
	while(!ans.empty()){
		int saida = ans.top();
		ans.pop(s);
		cout << saida << "\n";
	}

	return 0;
		
}