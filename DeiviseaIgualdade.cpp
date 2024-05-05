#include <bits/stdc++.h>

using namespace std; 

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	long long int n, aux, maior, count1, count;
	count = 0;
	vector<long long int> morador;

	cin >> n;

	for(int i = 0; i < n; i ++){
        	cin >> aux;
        	morador.push_back(aux);
    	}


	maior = morador[0];

	for(int i = 0; i < morador.size(); i++){
		if(maior < morador[i])
			maior = morador[i];
	}

	for(int i = 0; i < morador.size(); i++){
		if(morador[i] < maior)
			count += maior - morador[i];
	}

	cout << count;


	return 0;
}