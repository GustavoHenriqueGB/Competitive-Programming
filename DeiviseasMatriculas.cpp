#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


	vector<string> alunos, alunos2;
	vector<long long int> ans;
	long long int n;
	string aux;

	cin >> n;

	for(int i = 0; i < n; i ++){
    	cin >> aux;
    	alunos.push_back(aux);
    	}

    for(int i = 0; i < alunos.size(); i++)
        alunos2.push_back(alunos[i]);
    

    sort(alunos2.begin(), alunos2.end());

	for(int i = 0; i < alunos.size(); i++){
		for(int j = 0; j < alunos2.size(); j++){
			if(alunos[i] == alunos2[j])
				ans.push_back(j);
		}
	}

	for(int i = 0; i < alunos.size(); i++)
        cout << ans[i] << " ";

	return 0;
}
