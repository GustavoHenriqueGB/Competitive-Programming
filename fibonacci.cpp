#include <bits/stdc++.h>

using namespace std;

float fibonacci(float x){
	float ans;
	ans = (pow(1 + sqrt(5), x) - pow(1 - sqrt(5), x))/(pow(2,x) * sqrt(5));
	return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    float n;
    cin >> n;

    cout << "O " << n << "º termo de fibonacci é: " << fibonacci(n);
    return 0;
}
