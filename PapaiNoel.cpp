#include<bits/stdc++.h>

using namespace std;
typedef pair<long long int, long long int> pii;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	long long int x, n, maior_pilha, maior, elem;
	char c;
	stack<pii> saco;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> c >> x;
		if(c == 'A'){
			if(saco.empty())
				maior = x;
			else{
				tie(elem, maior_pilha) = saco.top();
				maior = max(x, maior_pilha);	
			}
			saco.push({x, maior});

		}else if( c == 'V'){
			maior = saco.top().second;
			cout << maior << "\n";

		}else if(c == 'R'){
			if(!saco.empty())
				saco.top();
		}


	}

	return 0;
}