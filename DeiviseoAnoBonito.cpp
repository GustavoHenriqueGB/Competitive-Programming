#include<bits/stdc++.h>

using namespace std;

bool digitosDistintos(int ano) {
    string anoStr = to_string(ano);
    set<char> digitos;

    for(char digito : anoStr) {
        if (digitos.find(digito) != digitos.end())
            return false;

        digitos.insert(digito);
    }

    return true;
}

int main() {	
    int x;

    cin >> x; 

    int anoBonito = x + 1;

    while (!digitosDistintos(anoBonito))
        anoBonito++;

    cout << anoBonito << "\n";

    return 0;
}
