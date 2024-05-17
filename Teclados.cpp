
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n;
	map<char, char> teclado;
    string t1, t2;

	cin >> t1 >> t2 >> n;

    for(int i = 0; i < 26; i++)
        teclado.insert(pair<char, char>(t1[i], t2[i]));

	for(int i = 0; i < n; i++){
		int aux;
		cin >> t >> aux;

        if(t == 1)
		    estoque.insert(aux);
        else if(t == 2)
            if(estoque.count(aux))
                cout << "Sim\n";
            else
                cout << "Nao\n";
            
	}

   

	return 0;
		
}