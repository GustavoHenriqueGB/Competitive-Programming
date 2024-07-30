#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	long long n, aux, contador = 0;
	cin >> n >> aux;
	vector<int> entrada(n, aux);
 
	for(int i = 1; i < n; i++)
		cin >> entrada[i];
 
	for(int i = 1; i < n - 1; i++)
		if(entrada[i] < aux){
			contador = max(aux - entrada[i] + 1, contador);
			entrada[i] = contador;
			aux = entrada[i];
		}else{
			aux = entrada[i];
		}
 
		cout << contador << "\n";

	cout << "vetor: ";
	for(int i = 0; i < n; i++)
		cout << entrada[i] << " "; 
	return 0;
}