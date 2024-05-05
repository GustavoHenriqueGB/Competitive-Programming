#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long long int x, y, z;
    char c1, c2;
    const char ca = 'a';

    cin >> x >> y >> z >> c1 >> c2;


    if (abs((c2 - c1)) >= 4 && (c1 - ca) % 2 == 0){
        if((x + y)%z == 0){
            cout << "feliz" << "\n";

        } else if(z != 1 && (x + y ) % (z - 1) == 0 || (x + y )%(z + 1) == 0){
            cout << "meio feliz" << "\n";
        } else{
            cout << "triste";
        }
    }else{
        cout << "triste" << "\n";
    }

    return 0;
}