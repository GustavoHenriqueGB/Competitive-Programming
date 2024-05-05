#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t;

	cin >> t;

	for(int i = 0; i < t; i++){
		int soma = 0, soma1 = 0;
		string bilhete;

		cin >> bilhete;

		for(int i = 0; i < 3; i++){
			soma += bilhete[i];
			soma1 += bilhete[i+3];
		}

		if(soma == soma1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}