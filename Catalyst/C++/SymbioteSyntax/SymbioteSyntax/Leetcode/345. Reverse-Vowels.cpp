//
//  345-Reverse-Vowels.cpp
//  MAANG
//
//  Created by Atikul Gazi on 14/11/23.
//  https://leetcode.com/problems/reverse-vowels-of-a-string/

#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <stack>

using namespace std;

/*
 Example 1:
 
 Input: s = "hello"
 Output: "holle"
 
 Example 2:
 
 Input: s = "leetcode"
 Output: "leotcede"
 */

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
    stack<char> vowels;
    
    string reverseVowels(string s) {
        for (auto x : s) {
            if (isVowels(x)) {
                vowels.push(x);
            }
        }
        
        for (auto &x : s) {
            if (vowels.empty()) {
                break;
            }
            
            if (isVowels(x)) {
                x = vowels.top();
                vowels.pop();
            }
        }
        
        return s;
    }
};

int main() {
    printf("Hello 345-Reverse-Vowels\n");
    Solution sl;
    cout << sl.reverseVowels("hello") << endl;
    cout << sl.reverseVowels("leetcode") << endl;
}
