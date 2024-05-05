#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	long long int x, aux, count = 0, aux2 = 1;
	vector<long long int> problemas;

	cin >> x;

	for(int i = 0; i < x; i++){
		cin >> aux;
		problemas.push_back(aux);
	}

	sort(problemas.begin(), problemas.end());

	for(int i = 0; i < x; i++){
		if(problemas[i] >= aux2)
			count++, aux2++;
	}

	cout << count << "\n";

	return 0;
}