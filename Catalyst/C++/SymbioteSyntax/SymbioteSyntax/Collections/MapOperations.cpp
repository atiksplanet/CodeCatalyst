//
//  MapOperations.cpp
//  MAANG
//
//  Created by Atikul Gazi on 6/11/23.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

class Solution {
    map<string, int> dictionary;
    
public:
    void mapBasic() {
        dictionary.insert({"y", 10});
        dictionary.insert(make_pair("x", 11));
        cout << dictionary.size() << endl;
    }
};

int main()
{
    cout << "Hello Maps\n";
    Solution sl;
    sl.mapBasic();
}
