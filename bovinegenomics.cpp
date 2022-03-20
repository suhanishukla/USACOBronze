#include <bits/stdc++.h>
using namespace std; 
int main() {
    freopen("cownomics.in", "r", stdin); 
    freopen("cownomics.out", "w", stdout); 
    //make 2d arrays of spotty and plain 
    int n, m; 
    cin >> n >> m; 
    //string str; 
    string spotty[n]; 
    string plain[n]; 
    //for (int i=0; i<n; i++) {
      //  cin >> str; 
        //spotty.push_back(str); 
    //}
    //for (int i=0; i<n; i++) {
      //  cin >> str; 
        //plain.push_back(str); 
    //}
    for(string &s : spotty) {
        cin >> s; 
    }
    for (string &s : plain) {
        cin >> s; 
    }
    int ans; 
    //pick column of spotty and plain 
    //go thru each row and check if they're equal 
    for (int i=0; i<m; i++) {
        bool unique = true; 
        for (int j=0; j<n; j++){
            for (int k=0; k<n; k++) {
                if (spotty[j][i]==plain[k][i]) {
                    unique = false; 
                }
            }
        }
        ans+=unique; 
    }
    cout << ans << endl; 
}