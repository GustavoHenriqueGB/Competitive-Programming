#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int x, n, maior_pilha, aux;
	char c;
	stack<pii> saco;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> c >> x;

		if(c == 'A'){
			if(saco.empty())
				maior_pilha = x;
			else{
				tie(aux, maior_pilha) = saco.top();
				maior_pilha = max(x, saco.top().second);
			}
			saco.push({x, maior_pilha});

		}else if( c == 'V'){
			if(!saco.empty())
				cout << saco.top().second << "\n";
			else
				cout << "0\n";

		}else if(c == 'R'){
			if(!saco.empty())
				saco.pop();
		}
	}

	return 0;
}