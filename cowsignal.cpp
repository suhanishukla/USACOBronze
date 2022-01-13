#include <bits/stdc++.h>
using namespace std; 
int main() {
    freopen("cowsignal.in", "r", stdin); 
    freopen("cowsignal.out", "w", stdout); 
    int m,n,k; 
    cin >> m >> n >> k; 
    string str; 
    string output; 
    while (m--) {
        cin >> str; 
        for (int i=0; i<n; i++) {
            output.append(k, str[i]);   
        }
        for (int j=1;j<=k;j++) {
               cout << output << endl; 
        }
        output.clear(); 
    }
}