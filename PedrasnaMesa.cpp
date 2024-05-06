#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	string frase;
	int count = 0, n;

	cin >> n >> frase;

	for(int i = 0; i < frase.length() - 1; i++){
		if(frase[i] == frase[i+1])
			count++;
	}

	cout << count << '\n';

return 0;
}