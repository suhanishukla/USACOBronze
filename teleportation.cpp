#include <bits/stdc++.h>
#include <iostream>
#include <cstdio> 
using namespace std; 

int main() {
    freopen("teleport.in", "r", stdin); 
    freopen("teleport.out", "w", stdout);
    int x, y, a, b; 
    cin >> x >> y >> a >> b;
    int result; 
    if (abs(y-x) > (min(abs(x-a),abs(x-b)) + min(abs(y-a),abs(y-b)))){
        result = min(abs(x-a),abs(x-b)) + min(abs(y-a),abs(y-b)); 

    } else {
        result = abs(y-x); 
    }
    cout << result << endl;  

}