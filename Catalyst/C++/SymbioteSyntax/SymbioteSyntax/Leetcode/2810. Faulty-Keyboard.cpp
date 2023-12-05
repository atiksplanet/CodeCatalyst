//
//  2810-Faulty-Keyboard.cpp
//  MAANG
//
//  Created by Atikul Gazi on 14/11/23.
//  https://leetcode.com/problems/faulty-keyboard/description/

#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <stack>

using namespace std;

/*
 Input: s = "string"
 Output: "rtsng"
 
 Input: s = "poiinter"
 Output: "ponter"
 */

class Solution {
public:
    string finalString(string s) {
        string data;
        
        for (auto x : s) {
            if (x == 'i') {
                reverse(data.begin(), data.end());
            } else {
                data.push_back(x);
            }
        }
        return data;
    }
};

int main() {
    printf("Hello 2810-Faulty-Keyboard\n");
    
    Solution sl;
    cout << sl.finalString("string") << endl;
    cout << sl.finalString("poiinter") << endl;
}
