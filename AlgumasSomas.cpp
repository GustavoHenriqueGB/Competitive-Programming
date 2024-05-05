#include<bits/stdc++.h>

using namespace std;

int somadigitos(int num){
	int soma = 0;

	while(num > 0){
		soma += num % 10;
		num /= 10;
	}

	return soma;
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, a, b;

	cin >> n >> a >> b;

	int somaGeral = 0;

	for(int i = 1; i <= n; i++){
		int somadigito = somadigitos(i);
		
		if(a <= somadigito && somadigito <= b)
			somaGeral += i;

	}

	cout << somaGeral << "\n";

	return 0;
}