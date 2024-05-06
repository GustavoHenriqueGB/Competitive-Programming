#include<bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	long long int n, count = 0, sum;
	char x;
	bool check = 1;
	vector<char> linha;
	vector<vector<char>> matriz;

	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){

			cin >> x;
			linha.push_back(x);
		}
		matriz.push_back(linha);
		linha.clear();
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			sum = i + j;
			if(!(sum % 2) && matriz[i][j] == '#' || sum % 2 && matriz[i][j] == '.'){
			}else
				count++;
		}
	}

	if(count > 0)
		cout << "caleb volta e arruma\n";
	else
		cout << "OK\n";

	return 0;

}