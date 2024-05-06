#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;

	cin >> t;

	for(int i = 0; i < t; i++){
		int n, aux;
		long long int sum = 0, ans = 0, mini = 0;

		cin >> n;

		for(int j = 0; j < n; j++){
			cin >> aux;
			sum += aux;

			if(j == 0)
				mini = aux;
			else if(aux < mini)
				mini= aux;
		}

		ans = sum - (n * mini);
		cout << ans << "\n"; 
		
	}

	return 0;
}