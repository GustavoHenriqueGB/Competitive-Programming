#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t;

	cin >> t;

	for(int i = 0; i < t; i++){
		int aux;
		vector<int> nums;

		for(int i = 0; i < 3; i++){
			cin >> aux;
			nums.push_back(aux);
		}
		sort(nums.begin(), nums.end());
		cout << nums[1] << "\n";		
		nums.clear();
	}

	return 0;
}