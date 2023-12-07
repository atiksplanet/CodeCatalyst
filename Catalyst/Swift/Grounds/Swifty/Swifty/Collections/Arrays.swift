//
//  Arrays.swift
//  HuntWithSwift
//
//  Created by Atikul Gazi on 23/3/23.
//

import Foundation

class Solution {
    @discardableResult init() {
        print("----------", #function, "----------")
        // An array of 'Int' elements
        let oddNumbers = [1, 3, 5, 7, 9, 11, 13, 15]
        
        // An array of 'String' elements
        let streets = ["Albemarle", "Brandywine", "Chesapeake"]
        
        // Shortened forms are preferred
        var emptyDoubles: [Double] = []
        emptyDoubles.append(contentsOf: [1, 2])
        print(emptyDoubles)
        
        // The full type name is also allowed
        var emptyFloats: Array<Float> = Array()
        emptyFloats.append(1.0)
        print(emptyFloats)
        
        var digitCounts = Array(repeating: 0, count: 10)
        print(digitCounts)
        // Prints "[0, 0, 0, 0, 0, 0, 0, 0, 0, 0]"
    }
}
/// Main class to start
@main
class Main {
    static func main() {
        print("----------", #function, "----------")
        Solution()
    }
}
