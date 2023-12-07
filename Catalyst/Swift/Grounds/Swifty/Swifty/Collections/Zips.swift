//
//  Zips.swift
//  HuntWithSwift
//
//  Created by Atikul Gazi on 23/3/23.
//

import Foundation

class Solution {
    @discardableResult init() {
        print("----------", #function, "----------")
        let words = ["one", "two", "three", "four"]
        let numbers = 1...4
        let zipper = zip(words, numbers)
        //print(zipper)
        
        for (word, number) in zip(words, numbers) {
            print("\(word): \(number)")
        }
        let naturalNumbers = 1...Int.max
        //print(naturalNumbers)
        let zipped = Array(zip(words, naturalNumbers))
        // zipped == [("one", 1), ("two", 2), ("three", 3), ("four", 4)]
        print(zipped)
        
        let uniqueKeysWithValues = zip(words, 0..<5)
        let dics: Dictionary<String, Int> = Dictionary(uniqueKeysWithValues: zip([], []))
        print(dics)
        
        let countryCodes: Dictionary<String, Int> = .init(uniqueKeysWithValues: zipper)
        print(countryCodes)
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
