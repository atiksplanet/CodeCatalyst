//
//  Sets.swift
//  HuntWithSwift
//
//  Created by Atikul Gazi on 23/3/23.
//

import Foundation

class Solution {
    @discardableResult init() {
        unOrderedSets()
        orderedSets()
        setOperation()
    }
    
    private func setOperation() {
        print("----------", #function, "----------")
        let attendees: Set = ["Alicia", "Bethany", "Diana", "Nathaniel Jr."]
        let visitors = ["Marcia", "Nathaniel", "Alicia"]
        
        // Returns a new set with the elements of both this set and the given sequence.
        var attendeesAndVisitors = attendees.union(visitors)
        print(attendeesAndVisitors)
        
        // Returns a new set with the elements that are either in this set or in the given sequence, but not in both.
        // Skip common value
        let eitherNeighborsOrEmployees = attendees.symmetricDifference(visitors)
        print("eitherNeighborsOrEmployees: ", eitherNeighborsOrEmployees)
        
        // Returns a new set with the elements that are common to both this set and the given sequence.
        // Take only common value
        let bothNeighborsAndEmployees = attendees.intersection(visitors)
        print("bothNeighborsAndEmployees: ", bothNeighborsAndEmployees)
        
        for item in attendeesAndVisitors.enumerated() {
            print(item)
        }
        
        // Removes the specified element from the set.
        attendeesAndVisitors.remove("Marcia")
        print(attendeesAndVisitors)
        
        // Inserts the given element in the set if it is not already present.
        attendeesAndVisitors.insert("atik")
        print(attendeesAndVisitors)
        
        print(attendeesAndVisitors.contains("atik"))
        
        let startWitA = attendeesAndVisitors.filter({ $0.hasPrefix("a") || $0.hasPrefix("A") })
        print(startWitA)
        
        print(attendeesAndVisitors)
        // Returns a new set containing the elements of this set that do not occur in the given sequence.
        var attendeesNew = attendeesAndVisitors.subtracting(visitors)
        print(attendeesNew)
        
        // Inserts the given element into the set unconditionally.
        print(attendeesNew.update(with: "Marcia") as Any)
        print(attendeesNew)
        
        // Removes the elements of the set that aren’t also in the given sequence.
        var employees: Set = ["Alicia", "Bethany", "Chris", "Diana", "Eric"]
        let neighbors = ["Bethany", "Eric", "Forlani", "Greta"]
        employees.formIntersection(neighbors)
        print(employees)
        
        // Inserts the elements of the given sequence into the set
        employees.formUnion(neighbors)
        print(employees)
        
        // Replace this set with the elements contained in this set or the given set, but not both.
        employees.formSymmetricDifference(neighbors)
        print(employees)
        
        print("attendeesAndVisitors: ", attendeesAndVisitors)
        attendeesAndVisitors.subtract(["atik"])
        print(attendeesAndVisitors)
        
        print(attendeesAndVisitors.joined(separator: "/"))
    }
    
    private func orderedSets() {
        print("----------", #function, "----------")
        var osets = NSOrderedSet()
        osets = .init(array: ["z", "a", "b", "x", "y", "a"])
        print(osets.array)
    }
    
    private func unOrderedSets() {
        print("----------", #function, "----------")
        var setWithInitValues: Set = ["a", "b", "x", "y", "a"]
        setWithInitValues.insert("c")
        print(setWithInitValues)
        
        var setWithNoValues1: Set<String> = []
        setWithNoValues1.insert("a")
        print(setWithNoValues1)
        
        var setWithNoValues2 = Set<String>()
        setWithNoValues2.insert("a")
        print(setWithNoValues2)
        
        var setWithNoValues3: Set<String>
        setWithNoValues3 = .init(["10"])
        setWithNoValues3.insert("a")
        setWithNoValues3.insert("b")
        setWithNoValues3.insert("c")
        let result3 = setWithNoValues3.insert("a")
        print(result3, setWithNoValues3)
        
        let initialIndices = Set(0..<5)
        print(initialIndices)
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
