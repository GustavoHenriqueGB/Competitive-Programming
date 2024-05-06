#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	float nota;
	int n, acerto = 0;

	cin >> n;

	for(int i = 0; i < n; i ++){
		char alternativa, resposta;

		cin >> resposta >> alternativa;

		if(resposta == alternativa)
			acerto++;
	}

	nota = ((float)acerto / n) * 10;
	cout << fixed << setprecision(2) << "Nota: " << nota << "\n";

	return 0;
}