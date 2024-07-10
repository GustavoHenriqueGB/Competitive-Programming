#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, t;
    cin >> n >> t;

    vector<int> livros(n);
    for (int i = 0; i < n; i++) {
        cin >> livros[i];
    }

    int maxLivros = 0;
    int tempoAtual = 0;
    int inicio = 0;

    for(int fim = 0; fim < n; fim++) {
        tempoAtual += livros[fim];

        while(tempoAtual > t){
            tempoAtual -= livros[inicio];
            inicio++;
        }

        maxLivros = max(maxLivros, fim - inicio + 1);
    }

    cout << maxLivros << "\n";

    return 0;
}
