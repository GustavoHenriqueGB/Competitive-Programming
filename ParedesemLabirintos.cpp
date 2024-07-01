#include<bits/stdc++.h>

using namespace std;
const int MAX = 500;
int n, m, k;
char labirinto[MAX][MAX];
bool visitado[MAX][MAX];
vector<pair<int, int>> celulasVazias;

void dfs(int x, int y){
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    visitado[x][y] = true;
    celulasVazias.push_back({x, y});

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && labirinto[nx][ny] == '.' && !visitado[nx][ny])
            dfs(nx, ny);
    }
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	int s = 0;
	cin >> n >> m >> k;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++){
			cin >> labirinto[i][j];
			if (labirinto[i][j] == '.')
                s++;
        }
	
	for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) 
            if (labirinto[i][j] == '.'){
                dfs(i, j);
                break;
            }
        if(!celulasVazias.empty())
     		break;
    }

	for(int i = 0; i < k; i++){
        int x = celulasVazias[s - 1 - i].first;
        int y = celulasVazias[s - 1 - i].second;
        labirinto[x][y] = 'X';
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << labirinto[i][j];
        }
        cout << '\n';
    }

	return 0;
}