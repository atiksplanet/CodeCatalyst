import UIKit

class Solution {
    func largestOddNumber(_ num: String) -> String {
        while !num.isEmpty {
            if (num.last?.wholeNumberValue)! % 2 == 1 {
                return num
            } else {
                num.dropLast()
            }
        }
        return ""
    }
}

print(Solution().largestOddNumber("52"))
print(Solution().largestOddNumber("4206"))
print(Solution().largestOddNumber("35427"))
