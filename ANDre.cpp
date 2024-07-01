#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	
    int t;
    cin >> t;
	
    while (t--) {
        int n, k = 1;
        cin >> n;
		while (k <= n) {
			k <<= 1;
    }
        cout << k - 1<< endl;
    }
	
    return 0;
}
