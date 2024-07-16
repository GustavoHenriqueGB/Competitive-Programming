#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, dinheiro;
    cin >> n >> dinheiro;
    vector<int> livros(n);

    for (int i = 0; i < n; i++)
        cin >> livros[i];

    sort(livros.begin(), livros.end());

    int* x = &livros[0];
    int* y = &livros[n - 1];

    int bestX = *x, bestY = *y;
    while (x < y) {
        int soma = *x + *y;
        if(soma == dinheiro){
            if(abs(*x - *y) < abs(bestX - bestY)){
                bestX = *x;
                bestY = *y;
            }
            x++;
            y--;
        }else if(soma < dinheiro)
            x++;
        else
            y--;
    }

    if(bestX > bestY)
        swap(bestX, bestY); 

    cout << bestX << " " << bestY << "\n";
    return 0;
}
