//
//  1903. Largest Odd Number in String.cpp
//  SymbioteSyntax
//
//  Created by Atikul Gazi on 8/12/23.
//

#include <iostream>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        while (num.empty() == false) {
            auto last = num.back();
            if (last % 2 == 1) {
                return num;
            } else {
                num.pop_back();
            }
        }
        return "";
    }
};

int main() {
    cout << "Hello, 1903. Largest Odd Number in String!\n";
    
    Solution sl;
    cout << sl.largestOddNumber("52") << endl;
    cout << sl.largestOddNumber("4206") << endl;
    cout << sl.largestOddNumber("35427") << endl;
    
    return 0;
}
