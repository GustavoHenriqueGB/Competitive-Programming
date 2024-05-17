#include<bits/stdc++.h>

using namespace std;
typedef tuple<int, int, int, int, int> ti;

struct ordenar{
    bool operator()(ti a, ti b){
        if(get<0>(a) == get<0>(b))
            return get<1>(a) > get<1>(b);
        else
            return get<0>(a) > get<0>(b);
    }
};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, tempoAtual = 0;
	priority_queue<ti, vector<ti>, ordenar> callCenter;

	cin >> n;

	for(int i = 1; i < n + 1; i++){
		int t, p, r;
		cin >> t >> p >> r;
		callCenter.push({0, i, t, p, r});
	}

	while(!callCenter.empty()){
		int tempoChegada, id, tempoEsperado, paciencia, retorno, tempoInicial;
		tie(tempoChegada, id, tempoEsperado, paciencia, retorno) = callCenter.top();
		callCenter.pop();
		
		if(tempoChegada > tempoAtual)
			tempoAtual = tempoChegada;
		if(tempoChegada + paciencia >= tempoAtual)
			tempoAtual += tempoEsperado;
		else
			callCenter.push({tempoChegada + paciencia + retorno, id, tempoEsperado, paciencia, retorno});
	}	

	cout << tempoAtual << "\n";

	return 0;
		
}