#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	long long int x, n;
	char c;
	stack<long long int> saco, sacoAux;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> c >> x;
		if(c == 'A'){
			saco.push(x);
			sacoAux.push(x);
		}else if( c == 'V'){
			long long int max = 0;
			while(!sacoAux.empty()){
				while(sacoAux.size() > saco.size())
					sacoAux.pop();
				if(sacoAux.top()>max){
					max = sacoAux.top();
					sacoAux.pop();
				}else
					sacoAux.pop();
			}
			cout << max << "\n";

		}else if(c == 'R'){
			if(!saco.empty())
				saco.pop();
		}


	}

	return 0;
}