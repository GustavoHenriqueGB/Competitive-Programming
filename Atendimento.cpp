
#include<bits/stdc++.h>

using namespace std;
typedef tuple<int, int, int> ti;

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

	int n, m, tempoAtual = 0;
	priority_queue<ti, vector<ti>, ordenar> caixas, clientes;

	cin >> n >> m;

	for(int i = 0; i < n; i++){
		int velocidade;
		cin >> velocidade;
		caixas.push({0, i, velocidade});
	}

    for(int i = 0; i < m; i++){
		int itens;
		cin >> itens;
		clientes.push({0, i, itens});
	}

	while(!clientes.empty()){
		int tempoChegada, idCliente, qItens, vCaixa, idCaixa, quandoLivre;
		tie(tempoChegada, idCliente, qItens) = clientes.top();
		tie(quandoLivre, idCaixa, vCaixa) = caixas.top();
        clientes.pop();
		
		if(tempoChegada > tempoAtual)
			tempoAtual = tempoChegada;
		if(tempoAtual >= quandoLivre)
			tempoAtual += qItens * quandoLivre;
		else
			caixas.push({quandoLivre, idCaixa, vCaixa});
	}	

	cout << tempoAtual << "\n";

	return 0;
		
}