
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int q, t;
	set<int> estoque;

	cin >> q;

	for(int i = 0; i < q; i++){
		int aux;
		cin >> t >> aux;

        if(t == 1)
		    estoque.insert(aux);
        else if(t == 2)
            if(estoque.count(aux))
                cout << "Sim\n";
            else
                cout << "Nao\n";
            
	}

   

	return 0;
		
}