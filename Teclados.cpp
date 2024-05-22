#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, t;
	map<char, char> teclado;
    string t1, t2;

	cin >> t1 >> t2 >> n;

    for(int i = 0; i < 26; i++)
        teclado.insert(pair<char, char>(t1[i], t2[i]));
	
	for(int i = 0; i < 26; i++)
        teclado.insert(pair<char, char>(t1[i] - 32, t2[i] - 32));

    for(int i = 0; i < n; i++){
    	string entrada, answer = "";
    	cin >> entrada;

    	for(int j = 0; j < entrada.size(); j++){
    		if(teclado.count(entrada[j]))
    			answer += teclado[entrada[j]];
    		else
    			answer += entrada[j];
    	}

    	cout << answer << "\n";
    }

   

	return 0;
		
}