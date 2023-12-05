//
//  2785-Sort-Vowels-in-String.cpp
//  MAANG
//
//  Created by Atikul Gazi on 13/11/23.
// https://leetcode.com/problems/sort-vowels-in-a-string/description/?envType=daily-question&envId=2023-11-13

#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;

// Input: s = "lEetcOde"
// Output: "lEOtcede"
// Explanation: 'E', 'O', and 'e' are the vowels in s; 'l', 't', 'c', and 'd' are all consonants. The vowels are sorted nondecreasing(1, 2, 5, 10) according to their ASCII values, and the consonants remain in the same places.
// 1 <= s.length <= 10^5

// Find all vowels and save to map and increase count
// Then iterate map and put vowels unless count 0
// ASCII: A(65), Z(90), a(97), z(122)
class Solution {
    bool isVowels(char c) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return true;
        } else {
            return false;
        }
    }
public:
    string sortVowels(string s) {
        map<char, int> charCounter;
        
        for (auto x : s) {
            if (isVowels(x)) {
                charCounter[x]++;
            }
        }
        
        for (auto &x : s) {
            if (charCounter.empty()) {
                break;
            }
            
            if (isVowels(x)) {
                x = charCounter.begin()->first;
                charCounter.begin()->second--;
                
                if (charCounter.begin()->second == 0) {
                    charCounter.erase(charCounter.begin());
                }
            }
        }
        
        return s;
    }
};

int main() {
    Solution sl;
    cout << sl.sortVowels("lEetcOde") << endl;
    cout << sl.sortVowels("lYmpH") << endl;
    cout << sl.sortVowels("AtikulGazi") << endl;
    cout << sl.sortVowels("MdAtikulGazi") << endl;
    cout << sl.sortVowels("IsratJahanMim") << endl;
}
