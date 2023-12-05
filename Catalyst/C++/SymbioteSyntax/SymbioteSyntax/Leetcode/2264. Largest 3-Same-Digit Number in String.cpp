//
//  2264. Largest 3-Same-Digit Number in String.cpp
//  SymbioteSyntax
//
//  Created by Atikul Gazi on 4/12/23.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
    bool isGood(string str) {
        return str.at(0) == str.at(1) && str.at(1) == str.at(2);
    }
public:
    string largestGoodInteger(string num) {
        string result = "";
        
        for (int i = 0; i < (num.size() - 2); i++) {
            string subStr = num.substr(i, 3);
            if (isGood(subStr) && subStr.compare(result) >= 1) {
                result = subStr;
            }
            if (result.compare("999") == 0) {
                break;
            }
        }
        return result;
    }
};

int main() {
    Solution sl;
    //cout << sl.largestGoodInteger("1233333444") << endl;
    //cout << sl.largestGoodInteger("222") << endl;
    cout << sl.largestGoodInteger("6777133339") << endl;
    //cout << sl.largestGoodInteger("2300019") << endl;
    //cout << sl.largestGoodInteger("42352338") << endl;
}
