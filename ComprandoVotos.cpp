#include<bits/stdc++.h>

using namespace std;
typedef tuple<int, int> ti;

struct ordenar{
    bool operator()(ti a, ti b){
        if(get<0>(a) == get<0>(b))
            return get<1>(a) < get<1>(b);
        else
            return get<0>(a) < get<0>(b);
    }
};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, votos, votosSanan, indice, count = 0;
	priority_queue<ti, vector<ti>, ordenar> candidatos;

	cin >> n;

	for(int i = 0; i < n; i++){
		if(i == 0){
			cin >> votosSanan;
		}else{
			cin >> votos;
			candidatos.push({votos, i + 1});
		}
	}

	while(!candidatos.empty()){
		int votosAtuais, indiceAtual;
		tie(votosAtuais, indiceAtual) = candidatos.top();
		candidatos.pop();

		if(votosAtuais >= votosSanan){
			votosAtuais--;
			votosSanan++;
			count++;
			candidatos.push({votosAtuais, indiceAtual});
		}else
			break;
	}

	cout << count << "\n";

	return 0;
}