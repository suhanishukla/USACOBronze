#include <bits/stdc++.h> 
using namespace std; 
int main() {
    freopen("cownomics.in", "r", stdin); 
    freopen("cownomics.out", "w", stdout); 
    int n, m;  
    cin >> n >> m; 
    string spotty[n]; 
    string plain[n]; 
    for (string &s : spotty) {
        cin >> s; 
    }
    /*3 8
AATCCCAT
GATTGCAA
GGTCGCAA
ACTCCCAG
ACTCGCAT
ACTTCCAT*/
    for (string &s : plain) {
        cin >> s; 
    }
    //pick 1st column and 2nd, go thru all possible thirds then advance second 
    //go thru each, 
    set<string> s; 
    int ans=0; 
    for (int i=0; i<m; i++) {
        for (int j=i+1; j<m; j++) {
            for (int k=j+1; k<m; k++) {
                bool unique=true; 
                s.clear(); 
                //go thru all rows for the three column combo 
                //add all strings for each row 
                for (int l=0; l<n; l++) {
                    string str1; 
                    str1.push_back(spotty[l][i]); 
                    str1.push_back(spotty[l][j]); 
                    str1.push_back(spotty[l][k]); 
                    /*cout << "n: " << n << endl; 
                    cout << "i " << i << endl; 
                    cout << "j " << j << endl; 
                    cout << "k " << k << endl; 
                    cout << "l " << l << endl; 
                    cout << "m : " << m << endl; */


                    s.insert(str1); 
                   // cout << str1 << endl; 
                }
                //iterate thru each row of plain 
                //check if each three letter combo is in set s 
                for (int l=0; l<n; l++) {
                    string str2; 
                    str2.push_back(plain[l][i]);                    
                    str2.push_back(plain[l][j]);
                    str2.push_back(plain[l][k]);
                    //cout << str2 << endl; 
                    if (s.count(str2)!=0) {
                        unique = false; 
                        break; 
                    }

                }
                if (unique) {
                    ans++; 
                    //cout << "incrementing ans: " << ans << endl; 
                }
            }
        }
    }
    cout << ans << endl; 
}