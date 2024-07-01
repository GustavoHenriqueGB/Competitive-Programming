#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

void bfs(int x, int y, vector<vector<char>>& tabuleiro, vector<vector<int>>& componente, vector<int>& tam, int comp_id){
    int n = tabuleiro.size() - 2;
    int m = tabuleiro[0].size() - 2;
    queue<pii> fila;
    fila.push({x, y});
    componente[x][y] = comp_id;
    int tamanho = 0;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while(!fila.empty()){
        pii atual = fila.front();
        fila.pop();
        tamanho++;

        for(int i = 0; i < 4; i++){
            int nx = atual.first + dx[i];
            int ny = atual.second + dy[i];
            if(tabuleiro[nx][ny] == '.' && componente[nx][ny] == -1){
                componente[nx][ny] = comp_id;
                fila.push({nx, ny});
            }
        }
    }
    tam[comp_id] = tamanho;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> tabuleiro(n+2, vector<char>(m+2, '*'));
    vector<vector<int>> componente(n+2, vector<int>(m+2, -1));
    vector<int> tam;
    int comp_id = 0;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> tabuleiro[i][j];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(tabuleiro[i][j] == '.' && componente[i][j] == -1){
                tam.push_back(0);
                bfs(i, j, tabuleiro, componente, tam, comp_id);
                comp_id++;
            }
        }
    }

    vector<string> resultado(n, string(m, '.'));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(tabuleiro[i][j] == '*'){
                set<int> componentes_adjacentes;
                int dx[4] = {-1, 1, 0, 0};
                int dy[4] = {0, 0, -1, 1};

                for(int k = 0; k < 4; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if(tabuleiro[nx][ny] == '.' && componente[nx][ny] != -1){
                        componentes_adjacentes.insert(componente[nx][ny]);
                    }
                }

                int tamanho_total = 1;
                for(int comp : componentes_adjacentes){
                    tamanho_total += tam[comp];
                }
                resultado[i-1][j-1] = (tamanho_total % 10) + '0';
            }
        }
    }

    for(const string& linha : resultado){
        cout << linha << '\n';
    }

    return 0;
}
