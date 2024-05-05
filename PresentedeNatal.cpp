#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s;

    cin >> s;

    int tamanho = s.length();

    if (tamanho % 2 == 1 && s[0] == s[tamanho - 1] && s[0] == s[tamanho/2]){
         cout << "bonita\n";

    }else{
        cout << "normalzinha\n";
    }

    return 0;
}