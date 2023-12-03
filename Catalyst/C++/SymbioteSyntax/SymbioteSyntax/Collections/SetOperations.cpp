//
//  SetOperations.cpp
//  MAANG
//
//  Created by Atikul Gazi on 25/3/23.
//

#include <stdio.h>
#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

class Solution {
    struct Pair {
        int index;
        string name;
    };
    
    struct Max2Min {
        bool operator()(const Pair &lhs, const Pair &rhs) const {
            if(lhs.index == rhs.index) {
                // Big name first
                return lhs.name > rhs.name;
            } else {
                // Small Index first
                return lhs.index < rhs.index;
            }
        }
    };
    
    void testOrderedSetWithCustomComparator() {
        set<Pair, Max2Min> mySet;
        
        mySet.insert({10, "d"});
        mySet.insert({10, "a"});
        mySet.insert({20, "b"});
        mySet.insert({40, "c"});
        mySet.insert({30, "d"});
        mySet.insert({10, "d"});
        mySet.insert({40, "z"});
        mySet.insert({20, "d"});
        mySet.insert({10, "d"});
        
        for (auto x : mySet) {
            printf("%d, %s\n", x.index, x.name.c_str());
        }
        
        // Test lower and upper bound
        Pair p = Pair({10, "a"});
        auto lb = mySet.lower_bound(p);
        printf("LB: %d, %s\n", lb->index, lb->name.c_str());
        auto ub = mySet.upper_bound(p);
        printf("UB: %d, %s\n", ub->index, ub->name.c_str());
    }
    
    void testOrderedSetWithPair() {
        set<pair<int, string>> mySet;
        
        mySet.insert({10, "d"});
        mySet.insert({10, "a"});
        mySet.insert({20, "b"});
        mySet.insert(pair<int, string>(40, "c"));
        mySet.insert({30, "d"});
        mySet.insert({10, "d"});
        
        for (auto x : mySet) {
            printf("%d, %s\n", x.first, x.second.c_str());
        }
    }
    
    void testOrderedSetWithIncreasingOrder() {
        set<int, greater<int>> mySet;
        
        mySet.insert(10);
        mySet.insert(20);
        mySet.insert(40);
        mySet.insert(30);
        mySet.insert(9);
        mySet.insert(10);
        mySet.insert(17);
        mySet.insert(50);
        
        for (auto x : mySet) {
            cout << x << endl;
        }
    }
    
    void testOrderedSetWithDecreasingOrder() {
        set<int> mySet;
        
        mySet.insert(10);
        mySet.insert(20);
        mySet.insert(40);
        mySet.insert(30);
        mySet.insert(9);
        mySet.insert(10);
        mySet.insert(17);
        mySet.insert(50);
        
        for (auto x : mySet) {
            cout << x << endl;
        }
    }
public:
    Solution() {
        testOrderedSetWithCustomComparator();
    }
};

int main() {
    cout << "In SetOperations" << endl;
    Solution sl;
    return 0;
}
