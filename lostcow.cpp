#include <bits/stdc++.h>
using namespace std; 

int main() {
    freopen("lostcow.in","r",stdin); 
    freopen("lostcow.out","w",stdout);
    int x,y; 
    cin >> x >> y; 

    //int position = x; 
    int distance; 
    if (y>x) {
      //stop when move+x>y
      for (int move=1; move<y-x; move=-2*move) {
          distance += abs(move)*2; 
      } 
    }
    if (y<x) {
        //x+move<y
        for (int move=1; move>y-x; move=-2*move) {
          distance += abs(move)*2;
 
        }
    }
    
    cout << distance+abs(x-y) << endl; 
}