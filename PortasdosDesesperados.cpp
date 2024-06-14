#include<bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
 
	int c;
	cin >> c;
 
	vector<int> entrada(c,0);
	vector<ll> answer(c+1,0);
	answer[0] = 100;
 
	for(int i = 0; i < c; i++)
		cin >> entrada[i];
 
	for(int i = 0; i < c; i++){
		answer[i + 1] = entrada[i] + answer[i];
	}
 	
 	 ll maior = 0;
	for(int i = 0; i <= c; i++)
		maior = max(maior, answer[i]);

	cout << maior << "\n";
 
	return 0;
}