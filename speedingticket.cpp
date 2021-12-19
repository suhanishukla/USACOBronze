#include <bits/stdc++.h>
using namespace std; 

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout); 
    int n,m; 
    int dist, limit; 
    int traveled, speed; 
    int count = 0; 
    vector<int> arr1; 
    vector<int> arr2; 
    cin >> n >> m; 
    while (n--) {
        cin >> dist >> limit;  
        while (dist--) {
            arr1.push_back(limit); 
        }
    }
    while (m--) {
        cin >> traveled >> speed; 
        while (traveled--) {
            arr2.push_back(speed); 
        }
    }
    for (int i=0; i<100; i++) {
        if (arr2[i]>arr1[i]) {
            count = max(count, (arr2[i]-arr1[i])); 
        }
    }
    cout << count << endl; 
}