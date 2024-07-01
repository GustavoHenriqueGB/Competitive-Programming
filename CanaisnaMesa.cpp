#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<pair<int, int>>> canais(k);

    int canal_atual = 0;
    bool left_to_right = true;

    int celulas_adicionadas = 0;

    for(int i = 1; i <= n; ++i){
        if(left_to_right)
            for(int j = 1; j <= m; ++j){
                canais[canal_atual].emplace_back(i, j);
                celulas_adicionadas++;
                
                if(canal_atual < k - 1 && canais[canal_atual].size() == 2)
                    canal_atual++;
            }
        else
            for(int j = m; j >= 1; --j){
                canais[canal_atual].emplace_back(i, j);
                celulas_adicionadas++;
                
                if(canal_atual < k - 1 && canais[canal_atual].size() == 2)
                    canal_atual++;
            }
        left_to_right = !left_to_right;
    }

    for(int i = 0; i < k; ++i){
        cout << canais[i].size() << " ";
        for(auto &cell : canais[i]){
            cout << cell.first << " " << cell.second << " ";
        }
        cout << endl;
    }

    return 0;
}
