#include <bits/stdc++.h>
using namespace std; 
typedef long int li; 
int main() {
    freopen("mixmilk.in", "r", stdin); 
    freopen("mixmilk.out", "w", stdout);
    li c1, c2, c3, m1, m2, m3; 
    cin >> c1 >> m1; 
    cin >> c2 >> m2; 
    cin >> c3 >> m3; 
    vector<int> amounts = {m1, m2, m3}; 
    vector<int> capacities = {c1, c2, c3}; 
    for (int i=0; i<100; i++) {
        int currentbucket = i%3; 
        int nextbucket = (currentbucket+1)%3; 
        int amt = min(amounts[currentbucket], capacities[nextbucket]-amounts[nextbucket]);
        amounts[currentbucket] = amounts[currentbucket]-amt; 
        amounts[nextbucket] += amt; 
    }
    for (int i=0; i<3; i++) {
        cout << amounts[i] << endl; 
    }
}