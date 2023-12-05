//
//  1980-find-unique-binary-string.cpp
//  MAANG
//
//  Created by Atikul Gazi on 17/11/23.
//  https://leetcode.com/problems/find-unique-binary-string/description/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string output;
        int i = 0;
        for (auto x : nums) {
            output += nums[i][i] == '0' ? '1' : '0';
            i++;
        }
        return output;
    }
};

int main() {
    printf("Hello 1980-find-unique-binary-string\n");
    
    Solution sl;
    vector<string> nums = {"111","011","001"};
    cout << sl.findDifferentBinaryString(nums) << endl;
}
