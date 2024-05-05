#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	char a = 'A';

	cin >> t;

	for(int i = 0; i < t; i++){
		
		string s;
		int n, count = 0;

		cin >> n >> s;
		
		for(int j = 0; j < 26; j++){
			bool primeiro = 1;
			for(int k = 0; k < n; k++){
				if((s[k] == a + j) && primeiro){
					count += 2;
					primeiro = 0;
				}else if(s[k] == a + j)
					count++;
			}	
		}
        
		cout << count << '\n';
	}

return 0;
}