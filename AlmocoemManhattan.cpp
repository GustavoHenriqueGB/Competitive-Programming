#include<bits/stdc++.h>

using namespace std;

int main() {	
    int n, xinicio, yinicio, valorMelhor, indice;

    cin >> n >> xinicio >> yinicio;

    for(int i = 0; i < n; i++){
        int xi, yi, preco;
        
        cin >> xi >> yi >> preco;

        if(i == 0){
            valorMelhor = (abs(xinicio - xi) + abs(yinicio - yi)) * 2 + preco;
            indice = i + 1;

        }else{
            if(((abs(xinicio - xi) + abs(yinicio - yi)) * 2 + preco) < valorMelhor){
                valorMelhor = (abs(xinicio - xi) + abs(yinicio - yi)) * 2 + preco;
                indice = i + 1;

            }

        }

    }

    cout << valorMelhor << " " << indice << "\n";

    return 0;
}