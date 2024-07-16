#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool canDistribute(vector<int>& chocolates, int n, int m, int x){
    ll total = 0;
    for(int i = 0; i < n; ++i){
        total += chocolates[i] / x;
        if(total >= m) 
            return true;
    }
    return total >= m;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    ll m;
    cin >> n >> m;

    vector<int> chocolates(n, 0);
    for(int i = 0; i < n; ++i)
        cin >> chocolates[i];

    int esq = 1, dir = *max_element(chocolates.begin(), chocolates.end());
    int best = 0;

    while(esq <= dir) {
        int mid = esq + (dir - esq) / 2;
        if(canDistribute(chocolates, n, m, mid)){
            best = mid;
            esq = mid + 1;
        }else
            dir = mid - 1;
    }

    cout << best << endl;

    return 0;
}
