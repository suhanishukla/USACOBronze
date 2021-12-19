#include <bits/stdc++.h>
using namespace std; 

int main() {
    freopen("blocks.in", "r", stdin); 
    freopen("blocks.out", "w", stdout); 
    int n; 
    cin >> n; 
    string word1, word2; 
    vector<char> side1;
    vector<char> side2;
    vector<char> blockletters; 
    vector<int> alphabet(26,0); 
    int ascii; 
    int lettercount = 0; 

    while (n--) {
        cin >> word1 >> word2; 
        //add unique letters from word1 to blockletters
        for (int i=0; i<word1.size(); i++) {

            if (count(blockletters.begin(), blockletters.end(), word1[i]) == 0) {
                blockletters.push_back(word1[i]); 
            }   
        }
        //add unique letters from word2 to blockletters
        for (int i=0; i<word2.size(); i++) {
            if (count(blockletters.begin(), blockletters.end(), word2[i])==0) {
                blockletters.push_back(word2[i]); 
            }
        }
        //find letter count for each letter in block letters and add it to final alphabet  
        for (int i=0; i<blockletters.size(); i++) {
            lettercount = max(count(word1.begin(), word1.end(), blockletters[i]), count(word2.begin(), word2.end(), blockletters[i])); 
            ascii = blockletters[i]; 
            alphabet[ascii-97] += lettercount; 
        }  
    }
    //output final alphabet
    for (int i=0; i<alphabet.size();i++) {
        cout << alphabet[i] << endl; 
    }
}