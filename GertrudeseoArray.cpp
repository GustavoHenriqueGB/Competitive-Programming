#include<bits/stdc++.h>
     
using namespace std;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, ans;
        cin >> n >> ans;

        for(int i = 0; i < n - 1; i++){
            int aux;
            cin >> aux;
            ans &= aux;
        }
        cout << ans << endl;
    }
 
	return  0;
}