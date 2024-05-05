#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	float n, r, m, p;

	cin >> n >> r >> m >> p;

	if(r/n > p/m)
		cout << "Promocao\n";
	else
		cout << "Enganacao\n";

	return 0;
}