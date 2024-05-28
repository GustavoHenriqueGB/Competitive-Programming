
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n;
	long long int s1 = 0, s2 = 0, s3 = 0;
		
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		s1 += aux;
	}
	for(int i = 0; i < n - 1; i++){
		int aux;
		cin >> aux;
		s2 += aux;
	}
	for(int i = 0; i < n - 2; i++){
		int aux;
		cin >> aux;
		s3 += aux;
	}
	
	cout << s1 - s2 << "\n" << s2 - s3 << "\n";

	return 0;
}