#include<bits/stdc++.h>

using namespace std;
typedef pair<long long int, long long int> pii;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	long long int x, n, maior_pilha = 0;
	char c;
	stack<pii> saco;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> c >> x;

		if(c == 'A'){
			if(saco.empty())
				maior_pilha = x;
			else{
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
				saco.top();
		}
	}

	return 0;
}