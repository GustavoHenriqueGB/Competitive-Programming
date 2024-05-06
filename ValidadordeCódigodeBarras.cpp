#include<bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	long long int n, m, count = 0;
	string x;
	vector<string> linha;
	vector<vector<string>> matriz;

	cin >> n >> m;

	for(int i = 0; i < n; i++){
		cin >> x;
		linha.push_back(x);
	}

	for(int i = 0; i < n - 1; i++){
		if(!(linha[i] == linha[i+1]))
			count++;
	}

	if(count > 0)
		cout << "as cobras so falam em codigo\n";
	else
		cout << "OK\n";

    return 0;

}