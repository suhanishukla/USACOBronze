#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>  
using namespace std; 

int main() {
    freopen("billboard.in", "r", stdin); 
    freopen("billboard.out", "w", stdout); 

    int bl_ax, bl_ay, tr_ax, tr_ay;
    int bl_bx, bl_by, tr_bx, tr_by;
    int bl_tx, bl_ty, tr_tx, tr_ty; 
    int wTA, lTA, wTB, lTB; 
    int TA, TB, covered; 
    int result; 
    cin >> bl_ax >> bl_ay >> tr_ax >> tr_ay; 
    cin >> bl_bx >> bl_by >> tr_bx >> tr_by; 
    cin >> bl_tx >> bl_ty >> tr_tx >> tr_ty; 

    wTA = min(tr_ay, tr_ty)-max(bl_ay,bl_ty); 
    lTA = min(tr_ax,tr_tx)-max(bl_ax,bl_tx); 
    TA = wTA * lTA; 
    wTB = min(tr_by, tr_ty)-max(bl_by,bl_ty); 
    lTB = min(tr_bx,tr_tx)-max(bl_bx,bl_tx); 
    TB = wTB * lTB; 

    if (wTA < 0 or lTA < 0) {
        TA = 0; 
    }
    if (wTB < 0 or lTB < 0) {
        TB = 0; 
    }

    covered = TA+TB; 
    result = ((tr_ay-bl_ay)*(tr_ax-bl_ax)) + ((tr_by-bl_by)*(tr_bx-bl_bx)) - covered; 
    cout << result; 



        
        
}
