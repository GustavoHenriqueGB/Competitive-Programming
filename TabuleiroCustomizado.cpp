#include<bits/stdc++.h>

using namespace std;
typedef tuple<int, int, int> tii;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector<vector<char>> tabuleiro(n+2, vector<char>(m + 2, '-'));
	vector<vector<bool>> visitado(n+2, vector<bool>(m + 2, 0));

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> tabuleiro[i + 1][j + 1];

	int letra = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(tabuleiro[i][j] == '.' && !visitado[i][j]){
                		queue<tii> fila;
               	 		fila.push(make_tuple(i,j,letra));
                		visitado[i][j] = true;

               			while(!fila.empty()){
		                	int x, y;
		                	tie(x, y, letra) = fila.front();
		                	if(letra % 2 == 0)
		                		tabuleiro[x][y] = 'B';
		                	else
		                		tabuleiro[x][y] = 'W';
		                	fila.pop();
		
		                	if(tabuleiro[x - 1][y] == '.' && !visitado[x - 1][y]){
		                		fila.push(make_tuple(x - 1, y, letra + 1));
		                        	visitado[x - 1][y] = true;
		                	}
		                	if(tabuleiro[x][y-1] == '.' && !visitado[x][y - 1]){
		                		fila.push(make_tuple(x, y - 1, letra + 1));
		                        	visitado[x][y - 1] = true;
		                	}
		                	if(tabuleiro[x + 1][y] == '.' && !visitado[x + 1][y]){
		                		fila.push(make_tuple(x + 1, y, letra + 1));
		                        	visitado[x + 1][y] = true;
		                	}
		                	if(tabuleiro[x][y + 1] == '.' && !visitado[x][y + 1]){
		                		fila.push(make_tuple(x, y + 1, letra + 1));
		                       		visitado[x][y + 1] = true;
		                	}
		
		                }
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++)
			cout << tabuleiro[i][j];
		cout << '\n';
	}
	return 0;
}
