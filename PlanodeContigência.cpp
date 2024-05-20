#include<bits/stdc++.h>

using namespace std;

int pilhasRespostas(queue<int> filaFuncao, int m){
    int checagem = 1;
    stack<int> ans;

     while(!filaFuncao.empty()){
            if(checagem == m){
                ans.push(filaFuncao.front());
                filaFuncao.pop();
                checagem = 1;
            }else{
                filaFuncao.push(filaFuncao.front());
                filaFuncao.pop();
                checagem++;
            }
        }

    return ans.top();
} 

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

    bool gog = 1;
	int n, m, resultado;
    queue<int> fila;

    cin >> n;

    for(int i = 0; i < n; i++)
        fila.push(i+1);

    for(int i = 1; i < n; i++ && gog){
        m = i;

        resultado = pilhasRespostas(fila, m);

        if(resultado == 13)
            gog = 0;
    }

    cout << m << "\n";
	return 0;
		
}