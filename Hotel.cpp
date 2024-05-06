#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long long int D, A, N, totalPagar;

    cin >> D >> A >> N;

    long long int diasTotais = 32 - N;

    if(N > 15){
        totalPagar = diasTotais * (D + A * 14);
        cout << totalPagar << "\n";
    }else{
        totalPagar = diasTotais *(D + A *(N - 1));
        cout << totalPagar << "\n";
    }

    return 0;
}