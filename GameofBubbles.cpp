#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll merge(vector<int>& arr, vector<int>& temp, int esq, int mid, int dir) {
    int i = esq;
    int j = mid;
    int k = esq;
    ll contador = 0;

    while(i <= mid - 1 && j <= dir){
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else{
            temp[k++] = arr[j++];
            contador += (mid - i);
        }
    }

    while(i <= mid - 1)
        temp[k++] = arr[i++];

    while(j <= dir)
        temp[k++] = arr[j++];

    for(i = esq; i <= dir; i++)
        arr[i] = temp[i];

    return contador;
}

ll mergeSort(vector<int>& arr, vector<int>& temp, int esq, int dir) {
    int mid;
    ll contador = 0;
    if(esq < dir){
        mid = (dir + esq) / 2;

        contador += mergeSort(arr, temp, esq, mid);
        contador += mergeSort(arr, temp, mid + 1, dir);

        contador += merge(arr, temp, esq, mid + 1, dir);
    }
    return contador;
}

string vencedor(int n, vector<int>& entrada) {
    vector<int> temp(n);
    long long inversoes = mergeSort(entrada, temp, 0, n - 1);

    if(inversoes % 2 == 1) 
        return "Marcelo";
    else 
        return "Carlos";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    vector<int> entrada(n, 0);
    for(int i = 0; i < n; i++) 
        cin >> entrada[i];

    cout << vencedor(n, entrada) << endl;

    return 0;
}
