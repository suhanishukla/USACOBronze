#include <bits/stdc++.h>
using namespace std; 


int main() {
    int n; 
    vector<int> p_i; 
    int p; 
    cin >> n; 
    for (int i=0; i<n; i++) {
        cin >> p; 
        p_i.push_back(p); 
    }
    int total; 
    int count=0; 
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            total = 0; 
            for (int k=i; k<=j; k++) {
                total += p_i[k]; 
            }
            bool works = false; 
            for (int k=i; k<=j; k++) {
                if (p_i[k]*(j-i+1)==total) {
                    works = true; 
                }
            }
            if (works) {
                count++;
            }
            
        }
    }
    cout << count << endl; 
}