#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, count = 1;
	bool check = 1;
	vector<char> letras;
	string entrada;

	cin >> n >> entrada;

	for(int i = 0; i < n; i++){

		if(letras.empty())
			letras.push_back(entrada[i]);
		else{
			if((letras[letras.size() - 1] == '(') && (entrada[i] == ')'))
				letras.pop_back();
			else 
				letras.push_back(entrada[i]);
		}	
	}		

	if(letras.size() == 2 &&  letras[1] != letras[0]){
		letras.pop_back();
		letras.pop_back();
	}

	if(letras.empty())
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}