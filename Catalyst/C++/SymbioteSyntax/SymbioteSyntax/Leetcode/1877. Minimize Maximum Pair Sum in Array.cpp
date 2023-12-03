//
//  1877. Minimize Maximum Pair Sum in Array.cpp
//  MAANG
//
//  Created by Atikul Gazi on 17/11/23.
//  https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description

#include <iostream>

using namespace std;

/*
 Given an array nums of even length n, pair up the elements of nums into n / 2 pairs such that:
 
 Each element of nums is in exactly one pair, and
 The maximum pair sum is minimized.
 
 Example 1:
 
 Input: nums = [3,5,2,3]
 Output: 7
 Explanation: The elements can be paired up into pairs (3,3) and (5,2).
 The maximum pair sum is max(3+3, 5+2) = max(6, 7) = 7.
 Example 2:
 
 Input: nums = [3,5,4,2,4,6]
 Output: 8
 Explanation: The elements can be paired up into pairs (3,5), (4,4), and (6,2).
 The maximum pair sum is max(3+5, 4+4, 6+2) = max(8, 8, 8) = 8.
 */

/*
 Solution:
 - Sort the array
 - Take 0 and (n-1) items to make pair
 - Take 1 and (n-2) items
 - And so on
 - Mark the larger sumup pair
 */

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto size = nums.size();
        int maxSum = 0;
        
        for (int i = 0; i < size / 2; i++) {
            //cout << i << " - " << (size - 1 - i) << endl;
            int pairSum = nums.at(i) + nums.at(size - 1 - i);
            maxSum = max(maxSum, pairSum);
        }
        return maxSum;
    }
};

int main() {
    printf("Hello 1877. Minimize Maximum Pair Sum in Array\n");
    
    Solution sl;
    //vector<int> nums = {3,5,4,2,4,6};
    vector<int> nums = {3,5,2,3};
    cout << sl.minPairSum(nums) << endl;
}
