#include <bits/stdc++.h>	

using namespace std;

const int MAX = 100001;
vector<int> cubos(MAX, 0);

int busca(int x, int tamanho){
    int l = 0, r = tamanho - 1, ans = -1;
    
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (cubos[mid] == x) {
            ans = mid;
            r = mid - 1;
        } else if (cubos[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return (ans != -1) ? ans + 1 : -1;
}

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> cubos[i];
    sort(cubos.begin(), cubos.begin() + n);

    while (m--) {
        int entrada;
        cin >> entrada;

        cout << busca(entrada, n) << " ";
    }
    cout << "\n";

    return 0;
}
