#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, f, p, aux, checagem, tempoTotal = 0;
	queue<int> posto;
	cin >> n >> f >> p;

	checagem = f;

	for(int i = 0; i < n; i++){
		cin >> aux;
		posto.push(aux);
	}

	while(posto.size() > 0){

		if(checagem == f){
		
			if(posto.front() <= p){
				tempoTotal += 5;
				posto.pop();
				checagem = 1;

			}else{
				posto.push(posto.front() - 2);
				posto.pop();
				tempoTotal += 10;
				checagem = 1;
			}
		
		}else{
			checagem += 1;
			posto.pop();
			tempoTotal += 1;
		}
	}

	cout << tempoTotal << "\n";

	return 0;
}