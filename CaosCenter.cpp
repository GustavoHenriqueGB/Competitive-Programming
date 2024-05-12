#include<bits/stdc++.h>

using namespace std;

struct Client {
    int id;
    int t;
    int p;
    int r;
};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, somaTotal = 0;
	bool ocupado = 0;
	queue<Client> callCenter;
	

	cin >> n;

	for(int i = 1; i < n + 1; i++){
		int t, p, r;

		cin >> t >> p >> r;
		Client client;
		client.id = i;
		client.t = t;
        client.p = p;
        client.r = r;
		callCenter.push(client);

	}

	for(int i = 0; i < n; i++){
		if(!ocupado){
			Client cliente = callCenter.front();
			somaTotal += cliente.t;
		}
		
	}

	for(int i = 0; i < n; i++) {
    Client cliente = callCenter.front();
    callCenter.pop();
	cout << cliente.id << " " << cliente.t << " " << cliente.p << " " << cliente.r << endl;
	}

	return 0;
}