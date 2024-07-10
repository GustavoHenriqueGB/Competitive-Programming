#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int t;

	cin >> t;

	while(t--){

		int a, b, c, d, count = 0;
		cin >> a;

		for(int i = 0; i < 3; i++){
			int aux;
			cin >> aux;
			if(aux > a)
				count++;
		}

		cout << count<< "\n";

	}

	return  0;
}