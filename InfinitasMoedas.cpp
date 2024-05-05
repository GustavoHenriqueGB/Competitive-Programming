#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	long long int n, s, ans = 0;

	cin >> n >> s;

	do{
	ans += s / n;
	s = s % n;
	n--;
	}while(s > 0);

	cout << ans << '\n';

return 0;
}