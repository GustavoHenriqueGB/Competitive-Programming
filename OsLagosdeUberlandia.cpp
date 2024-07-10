#include<bits/stdc++.h>

using namespace std;

typedef tuple<int, int, int> tii;
typedef pair<int, int> pii;

struct menor{
    bool operator() (tii a, tii b) {
        if (get<0>(a) == get<0>(b))
            return get<1>(a) > get<1>(b);
        return get<0>(a) > get<0>(b);
    }
};

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;

	vector<vector<char>> mapa(n + 2, vector<char>(m+2, 'X'));
	vector<vector<bool>> visitados(n+2, vector<bool>(m+2, 0));

	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> mapa[i][j];

	int t = 0;
    int lagos = 0;

    priority_queue<tii, vector<tii>, menor> pq;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(mapa[i][j] == '.' && !visitados[i][j]){
                stack<pii> pilha;
                pilha.push({i, j});
                int tamanho = 0;
                bool quebra = 0;
                while(!pilha.empty()){
                    tamanho++;
                    int x, y;
                    tie(x, y) = pilha.top();
                    pilha.pop();
                    visitados[x][y] = 1;
                    
                    if(mapa[x-1][y] == '.' && !visitados[x-1][y]){
                        pilha.push({x-1, y});
                        visitados[x-1][y] = 1;
                    }else if (mapa[x-1][y] == 'X')
                        quebra = 1;
                    if(mapa[x][y-1] == '.' && !visitados[x][y-1]){
                        pilha.push({x, y-1});
                        visitados[x][y-1] = 1;
                    }else if (mapa[x][y-1] == 'X')
                        quebra = 1;
                    if(mapa[x+1][y] == '.' && !visitados[x+1][y]){
                        pilha.push({x+1, y});
                        visitados[x+1][y] = 1;
                    }else if (mapa[x+1][y] == 'X')
                        quebra = 1;
                    if(mapa[x][y+1] == '.' && !visitados[x][y+1]){
                        pilha.push({x, y+1});
                        visitados[x][y+1] = 1;
                    }else if(mapa[x][y+1] == 'X')
                        quebra = 1;
                }
                if(!quebra){
                    pq.push(make_tuple(tamanho, i, j));
                    lagos++;
                }
            }
    
    int ans = 0;
    int contador = 0;

    vector<vector<bool>> visitados2(n+2, vector<bool>(m+2, 0));

	while(lagos - contador > k){
        int range, i, j;
        tie(range, i, j) = pq.top();
        pq.pop();
        ans += range;
        queue<pii> fila;
        fila.push({i,j});
        while(!fila.empty()){
            int x, y;
            tie(x, y) = fila.front();
            fila.pop();
            mapa[x][y] = '*';
            if(mapa[x-1][y] == '.' && !visitados2[x-1][y]){
                fila.push({x-1, y});
                visitados2[x-1][y] = 1;
            }
            if(mapa[x][y-1] == '.' && !visitados2[x][y-1]){
                fila.push({x, y-1});
                visitados2[x][y-1] = 1;
            }
            if(mapa[x+1][y] == '.' && !visitados2[x+1][y]){
                fila.push({x+1, y});
                visitados2[x+1][y] = 1;
            }
            if(mapa[x][y+1] == '.' && !visitados2[x][y+1]){
                fila.push({x, y+1});
                visitados2[x][y+1] = 1;
            }
        }
        contador++;
    }
    cout << ans << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++)
            cout << mapa[i][j];
        cout << endl;
    }
	return 0;
}