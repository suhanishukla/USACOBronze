#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n1, n2, n3, n4, n5, n6, n7; 
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7; 
    vector<int> numbers = {n1,n2,n3,n4,n5,n6,n7}; 
    int abc; 
    int a;
    int b; 
    int c; 
    //find abc 
    abc = *max_element(numbers.begin(), numbers.end()); 
   
    //find min to get a and remove from numbers 
    a = *min_element(numbers.begin(), numbers.end()); 
    for (int i=0; i<numbers.size(); i++) {
        if (numbers[i] == a) {
            numbers.erase(numbers.begin()+i);
            break;  
        }
    }
    //find min to get b 
    b = *min_element(numbers.begin(), numbers.end()); 

    c = abc - a - b; 
    cout << a << " " << b << " " << c << endl; 


}