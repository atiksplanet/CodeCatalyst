//
//  1913.swift
//  Swifty
//
//  Created by Atikul Gazi on 8/12/23.
//

import Foundation

class Solution {
    func largestOddNumber(_ num: String) -> String {
        var result = num
        while !result.isEmpty {
            if (result.last?.wholeNumberValue)! % 2 == 1 {
                return result
            } else {
                result.removeLast()
            }
        }
        return ""
    }
}

/// Main class to start
@main
class Main {
    static func main() {
        print("----------", #function, "----------")
        print(Solution().largestOddNumber("52"))
    }
}
