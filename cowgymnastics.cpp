#include <bits/stdc++.h> 
using namespace std; 
bool compare(int one, int two) {
    if (one > two) {
        return true; 
    } else {
        return false; 
    }
}
int main() {
    freopen("gymnastics.in", "r", stdin); 
    freopen("gymnastics.out", "w", stdout); 
    int k, n; 
    cin >> k >> n; 
    int arr[k+1][n+1]; 
    int x; 
    for (int i=0; i<k; i++) {
        for (int j=0; j<n; j++) {
            cin >> x; 
            arr[i][x] = j; 
        }
    }
    //create an array where index is the number 
    //value is the original position of number 
    int ans; 
    //go thru each pair in first row and check positions in rest of rows 
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            int one = arr[0][i]; 
            int two = arr[0][j]; 
            int target = compare(one,two); 
            bool consistent = true; 
            //check rest of rows 
            for (int m=1; m<k; m++) {
                if (compare(arr[m][i], arr[m][j]) != target) {
                    consistent = false; 
                }
            }
            if (consistent) {
                ans++; 
            }
        }
    }
    cout << ans << endl; 
}