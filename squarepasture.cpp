#include <bits/stdc++.h> 
using namespace std; 


int main() {
    freopen("square.in", "r", stdin); 
    freopen("square.out", "w", stdout); 

    int bl_ax, bl_ay, tr_ax, tr_ay; 
    int bl_bx, bl_by, tr_bx, tr_by; 
    int width, length; 
    int area; 
    cin >> bl_ax >> bl_ay >> tr_ax >> tr_ay; 
    cin >> bl_bx >> bl_by >> tr_bx >> tr_by; 
    width = max(tr_ay, tr_by) - min(bl_ay, bl_by); 
    length = max(tr_ax, tr_bx) - min(bl_ax, bl_bx); 
    area = (max(width,length))*(max(width,length));  
    cout << area; 
}