#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	stack<int> precos;

	int p, n, aux1, aux2;

	cin >> p >> n;

	for(int i = 0; i < n; i++){
		cin >> aux1 >> aux2;
		if(aux1 == 1)
			precos.push(aux2);
		else if(aux1 == 2)
			while(aux2--)
				precos.pop();
	}

	while(!precos.empty()){
		p += precos.top();
		precos.pop();
	}

	cout << p << "\n";

	return(0);
}