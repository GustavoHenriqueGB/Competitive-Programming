#include<bits/stdc++.h>

using namespace std;
typedef tuple<int, int> tii;
vector<vector<bool>> visitadosX(12, vector<bool>(12, 0));
vector<vector<bool>> visitadosY(12, vector<bool>(12, 0));
vector<vector<char>> bolo(12, vector<char>(12, 'S'));
set<tii> comidos;

int r, c;

void checagemX(int x, int y){
	stack<tii> pilha;
	pilha.push({x, y});
	int distancia = 0;
	queue<tii> comidos_temporario;

	while(!pilha.empty()){
		int x1, y1;
		tie(x1, y1) = pilha.top();
		visitadosX[x1][y1] = 1;
		pilha.pop();
		comidos_temporario.push({x1, y1});
		distancia += 1;

		if(bolo[x1 - 1][y1] == '.' && !visitadosX[x1 - 1][y1])
			pilha.push({x1 - 1, y1});
		if(bolo[x1 + 1][y1] == '.' && !visitadosX[x1 + 1][y1])
			pilha.push({x1 + 1, y1});
	}
	if(distancia == r)
		while(!comidos_temporario.empty()){
			int xTemporario, yTemporario;
			tie(xTemporario, yTemporario) = comidos_temporario.front();
			comidos_temporario.pop();
			comidos.insert({xTemporario, yTemporario});
		}
}

void checagemY(int x, int y){
	stack<tii> pilha;
	pilha.push({x, y});
	int distancia = 0;
	queue<tii> comidos_temporario;

	while(!pilha.empty()){
		int x1, y1;
		tie(x1, y1) = pilha.top();
		visitadosY[x1][y1] = 1;
		pilha.pop();
		comidos_temporario.push({x1, y1});
		distancia += 1;

		if(bolo[x1][y1 - 1] == '.' && !visitadosY[x1][y1 - 1])
			pilha.push({x1, y1 - 1});

		if(bolo[x1][y1 + 1] == '.' && !visitadosY[x1][y1 + 1])
			pilha.push({x1, y1 + 1});
	}
	if(distancia == c)
		while(!comidos_temporario.empty()){
			int xTemporario, yTemporario;
			tie(xTemporario, yTemporario) = comidos_temporario.front();
			comidos_temporario.pop();
			comidos.insert({xTemporario, yTemporario});
		}
}

void bfs(int x, int y){
	if(!visitadosX[x][y])
		checagemX(x, y);
	if(!visitadosY[x][y])
		checagemY(x, y);
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> r >> c;

	for(int i = 1; i <= r; i++)
		for(int j = 1; j <= c; j++)
			cin >> bolo[i][j];

	for(int i = 1; i <= r; i++)
		for(int j = 1; j <= c; j++)
			if(bolo[i][j] == '.' && (!visitadosX[i][j] || !visitadosY[i][j]))
				bfs(i, j);

	cout << comidos.size() << "\n";

	return  0;
}