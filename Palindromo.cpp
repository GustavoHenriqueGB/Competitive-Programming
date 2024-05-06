#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s;
    long long int n;

    cin >> n >> s;
    int count = 0;

    if(n % 2 == 0){
        for(int i = 0; i<= n/2; i++){

            if(s[i] != s[((n - 1) - i)]){
                count++;
            }

        }
    }else{
        for(int i = 0; i< n/2; i++){

            if(s[i] != s[((n - 1) - i)]){
                count++;
            }

        }

    }

    if(count == 0){
        cout << "Yes\n"; 
    }else{
        cout << "No\n";
    }

    return 0;
}