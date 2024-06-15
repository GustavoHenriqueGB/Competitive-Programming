#include <iostream>

using namespace std;
typedef long long ll;

int main() {
    ll n, mask = 1;
    cin >> n;

    if (n == 1) {
        cout << "1 0\n";
        return 0;
    }

    while (mask <= n)
        mask = (mask << 1) | 1;
    
    ll b = mask ^ n;
    
    cout << n << " " << b << "\n";
    
    return 0;
}
