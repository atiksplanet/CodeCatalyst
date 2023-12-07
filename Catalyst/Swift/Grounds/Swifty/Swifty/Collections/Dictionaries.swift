//
//  Dictionaries.swift
//  HuntWithSwift
//
//  Created by Atikul Gazi on 23/3/23.
//

import Foundation

class Solution {
    @discardableResult init() {
        print("----------", #function, "----------")
        let emptyDict: [String: String] = [:]
        print(emptyDict)
        
        let responseMessages = [
            200: "OK",
            403: "Access forbidden",
            404: "File not found",
            500: "Internal server error"
        ]
        print(responseMessages)
        
        var emptyDictionary: Dictionary<String, Int>
        emptyDictionary = .init(uniqueKeysWithValues: [("one", 1), ("two", 2)])
        print(emptyDictionary.values)
        
        emptyDictionary = .init(uniqueKeysWithValues: zip(["ten", "nine"], [9, 10]))
        print(emptyDictionary.values)
        
        emptyDictionary = .init(uniqueKeysWithValues: zip(responseMessages.values, 0..<5))
        print(emptyDictionary)
        
        var countryCodes: Dictionary<String, String> = .init(dictionaryLiteral: ("a", "A"), ("b", "B"),  ("d", "B"))
        print(countryCodes)
        print(countryCodes["c"])
        countryCodes["c"] = "CCC"
        print(countryCodes["c"])
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
